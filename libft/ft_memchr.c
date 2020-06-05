/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:41:33 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:41:34 by hstark           ###   ########.fr       */
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
