/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:48:45 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:19:27 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_list_free(t_list *begin, void (*f)(void *))
{
	t_list		*tmp;

	while (begin)
	{
		tmp = begin;
		begin = begin->next;
		f(tmp->data);
		free(tmp);
	}
}
