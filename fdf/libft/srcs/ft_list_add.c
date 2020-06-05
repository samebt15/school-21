/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:48:23 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:18:18 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_add(t_list **begin, void *data)
{
	t_list	*tmp;
	t_list	*new;

	if (!(new = ft_list_new(data)))
		return ;
	if (!(*begin))
		*begin = new;
	else
	{
	tmp = *begin;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
