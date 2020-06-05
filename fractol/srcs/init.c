/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 15:43:50 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_mlx	*ft_init(char frname, void *init)
{
	t_mlx	*mlx;

	if ((mlx = (t_mlx *)ft_memalloc(sizeof(t_mlx))) == NULL)
		return (NULL);
	mlx->init = init;
	if ((mlx->window = mlx_new_window(mlx->init, WIN_WIDTH,
										WIN_HEIGHT, "fractol")) == NULL ||
			(mlx->image = ft_new_image(mlx)) == NULL)
		return (NULL);
	mlx->cam.offsetx = 0;
	mlx->cam.offsety = 0;
	mlx->cam.zoomx = 0;
	mlx->cam.zoomy = 0;
	mlx->mouse.x = 0;
	mlx->mouse.y = 0;
	mlx->cam.scale = 1;
	mlx->pthreads = 120;
	mlx->name = frname;
	mlx->fractol.iter = 24;
	mlx->fractol.color = 1;
	if (frname != 'j')
		mlx->mouse.flag = 1;
	return (mlx);
}
