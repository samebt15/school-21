/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:31:04 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:11:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	i = -1;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (++i < n && *(s1c + i) == *(s2c + i))
		;
	if (i == n)
		return (0);
	return (*(s1c + i) - *(s2c + i));
}
