/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:47:12 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:47:12 by hstark           ###   ########.fr       */
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
