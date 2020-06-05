/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:42:30 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:42:31 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (void *)s1;
	d2 = (void *)s2;
	while (n && *d1 == *d2)
	{
		d1++;
		d2++;
		n--;
	}
	if (!n)
		return (0);
	return (*d1 - *d2);
}
