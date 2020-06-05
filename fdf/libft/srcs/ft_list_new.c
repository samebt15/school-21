/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:48:55 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:23:20 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_list_new(void *data)
{
	t_list		*new;

	if (!(new = malloc(sizeof(t_list))))
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}
