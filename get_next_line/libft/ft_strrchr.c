/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:36:52 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:36:56 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		len;

	d = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (len--)
		if (d[len] == c)
			return (&d[len]);
	return (NULL);
}
