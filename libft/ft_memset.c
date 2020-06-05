/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:42:58 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:42:58 by hstark           ###   ########.fr       */
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
