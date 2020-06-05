/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:14 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:15 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_dlst			*ft_dlst_find(t_dlst *elem, int priority)
{
	t_dlst	*temp;

	temp = elem;
	while (temp->next != NULL && temp->priority != priority)
		temp = temp->next;
	if (temp->priority == priority)
		return (temp);
	else
		return (NULL);
}
