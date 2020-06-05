/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:44:45 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:44:46 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	s;
	int		k;

	k = 0;
	i = 0;
	s = (char)c;
	while (str[k] != '\0')
		k++;
	if (s == '\0')
		return ((char*)&str[k]);
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return ((char*)&str[i]);
		i++;
	}
	return (0);
}
