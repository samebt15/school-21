/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:49:40 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:23:44 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int	*mem;

	mem = malloc(size);
	if (mem == 0)
		exit(1);
	else
		ft_bzero(mem, size);
	return (mem);
}
