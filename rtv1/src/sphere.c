/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:03:20 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:14:55 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

double	get_t(double a, double b, double d)
{
	double t1;
	double t2;

	t1 = (-b - sqrt(d)) / (2 * a);
	t2 = (-b + sqrt(d)) / (2 * a);
	if ((t1 <= t2 && t1 >= 0) || (t1 >= 0 && t2 < 0))
		return (t1);
	else if ((t2 <= t1 && t2 >= 0) || (t1 < 0 && t2 >= 0))
		return (t2);
	return (-1);
}

double	sphere_intersect(t_vect o, t_vect dir, t_object *obj)
{
	double	a;
	double	b;
	double	c;
	double	d;
	t_vect	oc;

	oc = vect_sub(o, obj->pos);
	a = vect_dot(dir, dir);
	b = 2 * vect_dot(oc, dir);
	c = vect_dot(oc, oc) - (obj->r * obj->r);
	d = b * b - 4 * a * c;
	if (d < 0)
		return (-1);
	return (get_t(a, b, d));
}

void	sphere(t_mlx *mlx, t_ray *ray, int i, t_object *obj)
{
	obj->t = sphere_intersect(ray->orig, ray->dir, obj);
	if (obj->t > 0 && obj->t < mlx->min_t)
	{
		mlx->min_t = obj->t;
		mlx->clos_obj = i;
	}
}

void	sphere_data(t_mlx *mlx, char **str)
{
	int i;

	if (ft_check_len(str) != 9)
		ft_error("Wrong input");
	i = -1;
	OBJP.pos.x = (double)(ft_atoi(str[1]));
	OBJP.pos.y = (double)(ft_atoi(str[2]));
	OBJP.pos.z = (double)(ft_atoi(str[3]));
	OBJP.r = (double)(ft_atoi(str[4])) / 10;
	if (OBJP.r < 0.1 || ft_atoi(str[5]) < 0 || ft_atoi(str[6]) < 0
		|| ft_atoi(str[7]) < 0)
		ft_error("Wrong input for sphere");
	OBJP.col.r = ft_atoi(str[5]);
	OBJP.col.g = ft_atoi(str[6]);
	OBJP.col.b = ft_atoi(str[7]);
	OBJP.specular = (double)(ft_atoi(str[8]));
	OBJP.name = SPHERE;
	mlx->obj_counter++;
}

t_vect	sphere_normal(t_ray *ray, t_object *obj)
{
	t_vect n;

	n = vect_sum(ray->orig, vect_scale(ray->dir, obj->t));
	n = vect_norm(vect_sub(n, obj->pos));
	if (vect_dot(ray->dir, n) > EPS)
		n = vect_scale(n, -1);
	return (n);
}
