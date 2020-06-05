/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:21:06 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sr;

	if (!dst && !src && len)
		return (NULL);
	dest = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (dest < sr)
		while (len--)
			*dest++ = *sr++;
	else
	{
		dest += len;
		sr += len;
		while (len--)
			*(--dest) = *(--sr);
	}
	return (dst);
}
