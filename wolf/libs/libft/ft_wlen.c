/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 20:45:31 by hstark            #+#    #+#             */
/*   Updated: 2020/05/22 10:29:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wlen(char const *str, size_t start, char c)
{
	size_t	wlen;

	wlen = 0;
	while (str[start] != c)
	{
		wlen++;
		start++;
	}
	return (wlen);
}
