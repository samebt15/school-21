/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:29:30 by hstark            #+#    #+#             */
/*   Updated: 2020/05/22 10:29:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*cat;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	cat = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!cat)
		return (NULL);
	while (*s1 != '\0')
	{
		cat[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		cat[i] = *s2;
		i++;
		s2++;
	}
	return (cat);
}
