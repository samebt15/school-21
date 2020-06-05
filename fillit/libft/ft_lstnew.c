/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:42:00 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:42:06 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	if (!(a = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		a->content = NULL;
		a->content_size = 0;
		a->next = NULL;
		return (a);
	}
	a->content = malloc(content_size);
	if (a->content == NULL)
	{
		free(a);
		a = NULL;
		return (NULL);
	}
	a->content = ft_memcpy(a->content, content, content_size);
	a->content_size = content_size;
	a->next = NULL;
	return (a);
}
