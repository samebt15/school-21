/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:06:21 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:06:22 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*newstr;
	unsigned int	j;

	if (!s || !f)
		return (0);
	newstr = ft_strnew(ft_strlen(s));
	if (!newstr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		newstr[i] = (*f)(j, s[i]);
		i++;
		j++;
	}
	return (newstr);
}
