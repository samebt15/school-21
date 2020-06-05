/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:42:25 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:42:27 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int ch, size_t n)
{
	unsigned char	c;
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	c = (unsigned char)ch;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
		{
			*(d + i) = *(s + i);
			i++;
			return (&d[i]);
		}
		*(d + i) = *(s + i);
		i++;
	}
	return (NULL);
}
