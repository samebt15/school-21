/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:37:48 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;
	unsigned char	*sr;
	unsigned char	ch;

	res = (unsigned char *)dst;
	sr = (unsigned char *)src;
	ch = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		*(res + i) = *(sr + i);
		if (*(sr + i) == ch)
			return (dst + i + 1);
	}
	return (NULL);
}
