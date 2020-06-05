/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:52 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:52 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map			*map_gen(int size)
{
	t_map	*map;
	int		i;
	int		k;

	i = size;
	k = 0;
	map = (t_map*)malloc(sizeof(t_map));
	map->map = (char**)(malloc(sizeof(char*) * (i + 1)));
	map->map[i] = NULL;
	while (k < i)
	{
		map->map[k] = ft_strnew(i);
		ft_memset(map->map[k], '.', i);
		k++;
	}
	map->n = i;
	return (map);
}
