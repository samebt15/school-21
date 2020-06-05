/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:42:53 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:42:54 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dup_src;
	unsigned char	*dup_dst;

	dup_src = (unsigned char *)src;
	dup_dst = (unsigned char *)dst;
	if ((dst == NULL && src == NULL) || dst == src)
		return (NULL);
	if (dst > src)
		while (len--)
			dup_dst[len] = dup_src[len];
	else if (src > dst)
		while (len--)
			*dup_dst++ = *dup_src++;
	return (dst);
}
