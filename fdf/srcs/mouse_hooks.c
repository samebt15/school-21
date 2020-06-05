/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hooks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:41:14 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 11:41:20 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				mouse_press(int button, int x, int y, void *param)
{
	t_values	*values;

	values = (t_values *)param;
	values->mouse.x = x;
	values->mouse.y = y;
	if (button == 1 || button == 2)
		values->mouse.buttons |= 1 << (button - 1);
	if (button == 4)
		values->scale += (values->scale > 100000000) ? (0) : (2);
	if (button == 5)
		values->scale -= (values->scale < 1) ? (0) : (2);
	if (button == 3)
		set_default(values);
	drawmatrix(values);
	mlx_clear_window(values->mlx_ptr, values->win_ptr);
	mlx_put_image_to_window(values->mlx_ptr, values->win_ptr,
		values->img_ptr, 0, 0);
	return (0);
}

int				mouse_release(int button, int x, int y, void *param)
{
	t_values	*values;

	values = (t_values *)param;
	values->mouse.x = x;
	values->mouse.y = y;
	values->mouse.buttons &= ~(1 << (button - 1));
	return (0);
}

int				mouse_move(int x, int y, void *param)
{
	t_values	*values;

	values = (t_values *)param;
	if (values->mouse.buttons & 2)
	{
		values->offx += x - values->mouse.x;
		values->offy += y - values->mouse.y;
		drawmatrix(values);
		mlx_clear_window(values->mlx_ptr, values->win_ptr);
		mlx_put_image_to_window(values->mlx_ptr,
			values->win_ptr, values->img_ptr, 0, 0);
	}
	else if (values->mouse.buttons & 1)
	{
		values->dx += x - values->mouse.x;
		values->dy += y - values->mouse.y;
		drawmatrix(values);
		mlx_clear_window(values->mlx_ptr, values->win_ptr);
		mlx_put_image_to_window(values->mlx_ptr,
			values->win_ptr, values->img_ptr, 0, 0);
	}
	values->mouse.x = x;
	values->mouse.y = y;
	return (0);
}

int				draw_hook(void *param)
{
	t_values	*values;

	values = (t_values *)param;
	if (values->sync == 0)
		return (0);
	values->sync = 0;
	drawmatrix(values);
	mlx_clear_window(values->mlx_ptr, values->win_ptr);
	mlx_put_image_to_window(values->mlx_ptr, values->win_ptr,
		values->img_ptr, 0, 0);
	return (0);
}
