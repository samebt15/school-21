/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:04:01 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:04:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t dest;
	size_t source;

	i = 0;
	dest = ft_strlen(dst);
	source = ft_strlen(src);
	if (n <= dest)
		return (source + n);
	while (dst[i] && i < (n - 1))
		i++;
	while (*src && i < (n - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dest + source);
}
