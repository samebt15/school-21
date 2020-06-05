/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:23:09 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:14:25 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

int		key_hook(int keycode, t_mlx *m)
{
	if (keycode == 53)
		exit(EXIT_SUCCESS);
	if (keycode == 126)
		m->ray.orig.z += 1;
	else if (keycode == 124)
		m->ray.orig.x += 1;
	else if (keycode == 125)
		m->ray.orig.z -= 1;
	else if (keycode == 123)
		m->ray.orig.x -= 1;
	else if (keycode == 14)
		m->cam.rot.z += 1;
	else if (keycode == 12)
		m->cam.rot.z -= 1;
	else if (keycode == 2)
		m->cam.rot.y += 1;
	else if (keycode == 0)
		m->cam.rot.y -= 1;
	else if (keycode == 13)
		m->cam.rot.x -= 1;
	else if (keycode == 1)
		m->cam.rot.x += 1;
	ft_putimage(m);
	return (0);
}
