/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplacechr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:36:46 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:36:48 by hstark           ###   ########.fr       */
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
