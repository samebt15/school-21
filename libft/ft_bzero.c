/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:38:22 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:38:25 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;
	unsigned char		*ptr;

	ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}
