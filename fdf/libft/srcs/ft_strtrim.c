/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:09:06 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:09:07 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	if (s)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		l = ft_strlen(s) - 1;
		while ((s[l] == ' ' || s[l] == '\t' || s[l] == '\n') && i < l)
			l--;
		str = ft_strsub(s, i, l - i + 1);
		return (str);
	}
	return (0);
}
