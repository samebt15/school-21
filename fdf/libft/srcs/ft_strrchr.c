/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:07:52 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:07:53 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t l;

	l = ft_strlen((char*)str);
	while (l > 0 && str[l] != (char)ch)
		l--;
	if (str[l] == (char)ch)
		return ((char*)&str[l]);
	return (0);
}
