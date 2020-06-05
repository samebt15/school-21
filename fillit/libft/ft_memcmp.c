/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:42:37 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:42:38 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf, const void *buf2, size_t count)
{
	unsigned char	*big;
	unsigned char	*little;

	big = (unsigned char*)buf;
	little = (unsigned char*)buf2;
	if (count == 0)
		return (0);
	if (*big && *little && !count)
		return (0);
	while (count--)
	{
		if (*big != *little)
			return (*big - *little);
		little++;
		big++;
	}
	return (0);
}
