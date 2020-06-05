/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:55:06 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:11:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		count;
	char	*dest;

	dest = NULL;
	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	dest = (char*)malloc(count + 1);
	if (dest != NULL)
	{
		i = 0;
		while (i <= count)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
