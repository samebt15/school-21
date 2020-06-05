/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:30:03 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "image.h"
# include "libft.h"
# include "mlx.h"

void	ft_move_arrows(int key, t_mlx *mlx);

int		ft_close_window(int *argc);

int		ft_pixel_color(int iter, int max, int scheme);

void	*ft_drop(void *inc);

void	*ft_lambda(void *inc);

void	*ft_spider(void *inc);

void	*ft_mandelbrot(void *inc);

void	*ft_burning_ship(void *inc);

void	*ft_fractol_hq(void *inc);

void	*ft_comand_threads(void *inc);

t_mlx	*ft_init(char frname, void *init);

void	ft_hook(t_mlx *mlx, int *argc);

void	*ft_julia(void *mlx);

void	ft_launch_fractol(t_mlx *mlx);

#endif
