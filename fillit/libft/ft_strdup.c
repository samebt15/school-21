/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:45:22 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:45:23 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	len++;
	str = (char*)malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
