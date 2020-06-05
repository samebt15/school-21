/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:46:16 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:46:17 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	res = ft_strnew(ft_strlen((char*)s));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		res[i] = f(i, *s++);
		i++;
	}
	return (res);
}
