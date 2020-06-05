/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:45:54 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:45:55 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, char const *s2, size_t num)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	s = s2;
	n = num;
	d = s1;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - s1;
	n = num - dlen;
	if (n == 0)
		return (dlen + ft_strlen((char *)s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - s2));
}
