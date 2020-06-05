/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:27:35 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:27:37 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		checkpoint(char **tetra, int x, int y)
{
	int	i;

	i = 0;
	if (y - 1 >= 0)
	{
		if (tetra[y - 1][x] == '#')
			i++;
	}
	if (y + 1 <= 3)
	{
		if (tetra[y + 1][x] == '#')
			i++;
	}
	if (x + 1 <= 3)
	{
		if (tetra[y][x + 1] == '#')
			i++;
	}
	if (x + 1 <= 3)
	{
		if (tetra[y][x + 1] == '#')
			i++;
	}
	return (i);
}

int		ft_check_tetra(char **tetra)
{
	int	count;
	int	connections;
	int	x;
	int	y;

	y = 0;
	count = 0;
	connections = 0;
	while (y <= 3)
	{
		x = 0;
		while (x <= 3)
		{
			if (tetra[y][x] == '#')
			{
				count++;
				connections += checkpoint(tetra, x, y);
			}
			x++;
		}
		y++;
	}
	if (count == 4 && (connections == 6 || connections == 8))
		return (1);
	return (0);
}
