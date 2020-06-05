/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:42:35 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:42:36 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dup_src;
	unsigned char	*dup_dst;

	if ((dst == NULL && src == NULL) || dst == src)
		return (NULL);
	dup_src = (unsigned char *)src;
	dup_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dup_dst[i] = dup_src[i];
		i++;
	}
	return (dup_dst);
}
