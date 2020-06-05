/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:34:40 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:37:31 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t num)
{
	int		i;
	size_t	k;

	k = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (k < num && s2[k])
	{
		s1[i] = s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
