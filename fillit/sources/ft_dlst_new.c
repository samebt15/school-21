/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:24 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:25 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	replace(char **s, int prior)
{
	char	letter;
	int		x;
	int		y;

	x = 0;
	y = 0;
	letter = 65 + prior;
	while (s[y])
	{
		x = 0;
		while (s[y][x])
		{
			if (s[y][x] == '#')
				s[y][x] = letter;
			x++;
		}
		y++;
	}
}

static	char	**copy(char **s, int width, int height)
{
	char	**temp;
	int		i;

	temp = (char**)malloc(sizeof(char*) * (height + 1));
	temp[height] = NULL;
	i = 0;
	while (i < height)
	{
		temp[i] = ft_strnew((size_t)width);
		ft_memcpy(temp[i], s[i], (size_t)width);
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	s = NULL;
	return (temp);
}

t_dlst			*ft_dlst_new(char **tetra, int priority, int height, int width)
{
	t_dlst	*a;

	if (!(a = (t_dlst*)malloc(sizeof(t_dlst))))
		return (NULL);
	a->tetra = copy(tetra, width, height);
	a->priority = priority;
	replace(a->tetra, priority);
	a->height = height;
	a->width = width;
	a->next = NULL;
	a->prev = NULL;
	return (a);
}
