/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtraking_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:24:58 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:25:10 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	map_del(t_map **map)
{
	int	i;

	i = 0;
	while (i < (*map)->n)
	{
		free((*map)->map[i]);
		(*map)->map[i] = NULL;
		i++;
	}
	free((*map)->map);
	(*map)->map = NULL;
	free(*map);
	*map = NULL;
}

static	int		find_size_of_side(int s)
{
	int	n;

	n = 1;
	while (n * n < s)
		n++;
	return (n);
}

static	int		find_count(t_dlst *t)
{
	if (t == NULL)
		return (0);
	while (t->next != NULL)
		t = t->next;
	return (find_size_of_side((t->priority + 1) * 4));
}

static	void	map_write(t_map **map)
{
	int	i;

	i = 0;
	while (i < (*map)->n)
	{
		ft_putstr((*map)->map[i]);
		write(1, "\n", 1);
		i++;
	}
	map_del(map);
}

int				backtraking_main(t_dlst **head)
{
	t_map	*map;
	int		size;

	size = find_count(*head);
	map = map_gen(size);
	while (!find_sol(map, *head, 0, 0))
	{
		map_del(&map);
		map = map_gen(size++);
	}
	map_write(&map);
	return (0);
}
