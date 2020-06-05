/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetra_place.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:57 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:58 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				tetra_place(t_map *map, t_dlst *tet, int x, int y)
{
	int	i;
	int	k;

	k = 0;
	while (k < tet->height)
	{
		if (!(map->map[k + y]))
			return (0);
		i = 0;
		while (i < tet->width)
		{
			if (i + x == map->n)
				return (0);
			if (tet->tetra[k][i] == '.')
				;
			else if (map->map[k + y][i + x] == '.')
				map->map[k + y][i + x] = tet->tetra[k][i];
			else
				return (0);
			i++;
		}
		k++;
	}
	return (1);
}
