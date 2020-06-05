/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:07:43 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:07:44 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t n)
{
	size_t i;
	size_t j;
	size_t l;

	l = ft_strlen(s);
	if (l == 0)
		return ((char*)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (s[j] == str[i + j] && i + j < n)
		{
			j++;
			if (!(s[j]))
				return ((char*)str + i);
		}
		i++;
	}
	return (0);
}
