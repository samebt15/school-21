/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:50:35 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 11:50:36 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (source < dest)
		while (n > 0)
		{
			n--;
			*(dest + n) = *(source + n);
		}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
