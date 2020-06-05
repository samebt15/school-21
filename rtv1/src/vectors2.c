/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:27:59 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:15:57 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

t_vect	vect_sum(t_vect a, t_vect b)
{
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return (a);
}

t_vect	vect_sub(t_vect a, t_vect b)
{
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return (a);
}

t_vect	vect_scale(t_vect v, double b)
{
	v.x *= b;
	v.y *= b;
	v.z *= b;
	return (v);
}

double	vect_dot(t_vect v, t_vect b)
{
	return (v.x * b.x + v.y * b.y + v.z * b.z);
}

double	vect_len(t_vect v)
{
	return (sqrt(vect_dot(v, v)));
}
