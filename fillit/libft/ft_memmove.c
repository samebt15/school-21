/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:43:04 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:43:05 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;

	if (src == dst)
		return (dst);
	d = (char *)dst;
	i = 0;
	if ((char*)src > d)
	{
		while (i < n)
		{
			*(d + i) = *((char*)src + i);
			i++;
		}
	}
	else
	{
		while (n)
		{
			*(d + n - 1) = *((char*)src + n - 1);
			n--;
		}
	}
	return (d);
}
