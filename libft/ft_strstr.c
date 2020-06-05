/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:47:28 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:47:29 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		if (ft_strncmp((char *)s1, (char *)s2, ft_strlen(s2)) != 0)
			s1++;
		else
			return ((char *)s1);
	}
	return (NULL);
}
