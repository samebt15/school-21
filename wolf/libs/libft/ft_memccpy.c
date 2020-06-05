/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:23:23 by hstark            #+#    #+#             */
/*   Updated: 2020/05/22 10:29:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *buf;
	unsigned char *buf1;
	unsigned char c1;

	c1 = (unsigned char)c;
	buf = (unsigned char *)dst;
	buf1 = (unsigned char *)src;
	while (n)
	{
		*buf = *buf1;
		if (*buf1 == c1)
			return (dst + 1);
		buf++;
		buf1++;
		n--;
		dst++;
	}
	return (NULL);
}
