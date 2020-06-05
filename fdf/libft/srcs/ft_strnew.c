/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:07:30 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:07:31 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	if (size == (size_t)(-1))
		return (NULL);
	mem = malloc(size + 1);
	if (mem == 0)
		return (NULL);
	else
		ft_bzero(mem, size + 1);
	return (mem);
}
