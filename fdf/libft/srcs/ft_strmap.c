/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:06:13 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:06:15 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*newstr;

	if (!s || !f)
		return (0);
	newstr = ft_strnew(ft_strlen(s));
	if (!newstr)
		return (0);
	i = 0;
	while (s[i])
	{
		newstr[i] = (*f)(s[i]);
		i++;
	}
	return (newstr);
}
