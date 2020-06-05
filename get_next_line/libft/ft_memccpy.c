/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:41:29 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:38:57 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dup_src;
	unsigned char	*dup_dst;

	dup_src = (unsigned char *)src;
	dup_dst = (unsigned char *)dst;
	if ((dst == NULL && src == NULL) || dst == src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dup_dst[i] = dup_src[i];
		if (dup_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
