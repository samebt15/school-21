/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:27:48 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:27:49 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_dlst			*ft_dlst_add(t_dlst **head, t_dlst *new_elem)
{
	t_dlst	*temp;

	if (*head == NULL)
	{
		*head = new_elem;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_elem;
	new_elem->prev = temp;
	return (new_elem);
}
