/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:42:58 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:38:43 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned long int	i;
	unsigned char		*ptr;

	ptr = (unsigned char*)b;
	i = 0;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (ptr);
}
