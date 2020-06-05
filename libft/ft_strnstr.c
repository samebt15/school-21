/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:47:06 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:47:07 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t s1len;
	size_t s2len;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < s1len && i + s2len <= n)
	{
		if (ft_strncmp(&s1[i], s2, s2len) != 0)
			i++;
		else
			return ((char *)&s1[i]);
	}
	return (NULL);
}
