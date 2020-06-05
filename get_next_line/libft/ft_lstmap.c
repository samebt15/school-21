/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:41:13 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:39:04 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *nlist;

	list = f(lst);
	nlist = list;
	if (lst && f)
	{
		while (lst->next)
		{
			lst = lst->next;
			list->next = f(lst);
			if (list->next == NULL)
				return (NULL);
			list = list->next;
		}
		return (nlist);
	}
	return (NULL);
}
