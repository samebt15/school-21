/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambient.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:05:12 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:15:29 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void	ambient_data(t_mlx *mlx, char **str)
{
	int i;

	i = -1;
	if (ft_check_len(str) != 2)
		ft_error("Wrong input");
	mlx->ambient = (double)(ft_atoi(str[1])) / 100;
	if (mlx->ambient < 0)
		ft_error("Wrong intensity parameter");
}
