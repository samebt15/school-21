/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:41:33 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:38:55 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *d;

	d = (unsigned char *)s;
	while (n--)
	{
		if (*d == (unsigned char)c)
			return (d);
		d++;
	}
	return (NULL);
}
