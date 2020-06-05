/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:02 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:03 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	t_dlst	*del_elem(t_dlst **elem)
{
	t_dlst	*temp;
	t_dlst	*temp_next;
	int		i;

	i = 0;
	temp = *elem;
	temp_next = temp->next;
	while (temp->tetra[i])
	{
		free(temp->tetra[i]);
		temp->tetra[i] = NULL;
		i++;
	}
	free(temp->tetra);
	temp->tetra = NULL;
	temp->next = NULL;
	temp->prev = NULL;
	if (temp->next)
		temp_next->prev = NULL;
	free(*elem);
	*elem = NULL;
	return (temp_next);
}

t_dlst			*ft_dlst_del_all(t_dlst **head)
{
	t_dlst	*temp;

	temp = *head;
	while (temp)
	{
		temp = del_elem(&temp);
	}
	*head = NULL;
	return (*head);
}
