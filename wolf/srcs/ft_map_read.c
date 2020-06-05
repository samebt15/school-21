/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 17:57:19 by hstark            #+#    #+#             */
/*   Updated: 2020/05/21 17:58:04 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "wolf3d.h"

static int		ft_clean(t_list **head, t_wolf **wolf)
{
	t_list	*next;

	if (head)
		while (*head)
		{
			next = (*head)->next;
			ft_memdel(&((*head)->content));
			ft_memdel((void **)head);
			*head = next;
		}
	if (wolf)
		if (*wolf)
			if ((*wolf)->block)
				free((*wolf)->block);
	return (1);
}

static int		ft_checkmap(char *tmp)
{
	int		i;

	i = -1;
	while (tmp[++i] != '\0')
	{
		if ((tmp[i] > '9' || tmp[i] < '0') && tmp[i] != ' ')
		{
			ft_putendl("incorrect symbols");
			return (1);
		}
	}
	return (0);
}

static int		ft_lstfill(int fd, t_list **head, t_wolf **wolf)
{
	t_list	*curr;
	char	*tmp;
	int		est;
	int		flag;

	curr = *head;
	flag = 0;
	est = -1;
	while (get_next_line(fd, &tmp))
	{
		if (est == -1)
			est = ft_nbofwords(tmp, ' ');
		else if (ft_nbofwords(tmp, ' ') != est || ft_checkmap(tmp))
			flag++;
		((*wolf)->height)++;
		if (!(curr = ft_lstnew(tmp, ft_strlen(tmp) + 1)))
			ft_return("can't allocate list");
		ft_lstadd(head, curr);
		ft_strdel(&tmp);
	}
	if (ft_zalupa(&tmp, flag))
		return (1);
	(*wolf)->width = est;
	ft_lstrev(head);
	return (0);
}

static int		ft_mapconv(t_list **head, t_wolf **wolf)
{
	int		x;
	int		y;
	t_list	*tmp;
	char	**split;
	int		pos;

	tmp = *head;
	y = -1;
	while (++y < (*wolf)->height)
	{
		x = -1;
		split = ft_strsplit(tmp->content, ' ');
		while (++x < (*wolf)->width)
		{
			pos = y * (*wolf)->width + x;
			(((*wolf)->block)[pos]).id = ft_atoi(split[x]);
			(((*wolf)->block)[pos]).y = y;
			(((*wolf)->block)[pos]).x = x;
		}
		tmp = tmp->next;
		ft_free2darr(split);
	}
	return (0);
}

int				ft_mapread(int *fd, t_wolf *wolf)
{
	t_list	*head;

	wolf->height = 0;
	head = NULL;
	if (*fd < 0)
		return (1);
	if (ft_lstfill(*fd, &head, &wolf) == 1)
	{
		ft_putendl("error in map strings");
		return (ft_clean(&head, &wolf));
	}
	if (wolf->width < 3 || wolf->height < 3)
		ft_return("the minimum size of map is 3x3");
	ft_memdel((void **)&(wolf->block));
	if (!(wolf->block = (t_block *)ft_memalloc(sizeof(t_block)
			* wolf->width * wolf->height)))
		ft_return("can't allocate map");
	if (ft_mapconv(&head, &wolf))
		return (ft_clean(&head, &wolf));
	ft_clean(&head, NULL);
	if (ft_map_validation(wolf))
		return (ft_clean(NULL, &wolf));
	if (close(*fd))
		ft_return("close error");
	return (0);
}
