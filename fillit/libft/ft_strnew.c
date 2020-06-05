/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:46:48 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:46:49 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;
	size_t	shit;

	if (size == 4294967295)
		shit = 0;
	else
		shit = 1;
	a = (char*)malloc(size + shit);
	if (a == NULL)
	{
		return (NULL);
	}
	ft_bzero(a, size + shit);
	return (a);
}
