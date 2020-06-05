/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:45:13 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:38:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dup = ft_memalloc(len + 1);
	if (dup)
	{
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
