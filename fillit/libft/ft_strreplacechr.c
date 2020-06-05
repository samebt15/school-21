/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplacechr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:47:02 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:47:02 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplacechr(const char *src, char to, char what)
{
	char	*newsrc;
	int		i;

	if (src == NULL)
		return (NULL);
	newsrc = ft_strnew(ft_strlen(src));
	if (newsrc == NULL)
		return (NULL);
	i = 0;
	while (*src)
	{
		if (*src == to)
			newsrc[i] = what;
		else
			newsrc[i] = *src;
		src++;
		i++;
	}
	return (newsrc);
}
