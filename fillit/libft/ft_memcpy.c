/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:42:46 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:42:47 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;

	if (n == 0 || (dst == src))
		return (dst);
	a = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		a[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (a);
}
