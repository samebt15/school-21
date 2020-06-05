/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:42:30 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:42:31 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (((char*)memptr)[i] == (char)val)
			return ((void*)&memptr[i]);
		i++;
	}
	return (NULL);
}
