/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:46:04 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:46:04 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		res[i++] = f(*s++);
	return (res);
}
