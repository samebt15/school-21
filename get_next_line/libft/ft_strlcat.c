/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:34:22 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:37:42 by hstark           ###   ########.fr       */
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
