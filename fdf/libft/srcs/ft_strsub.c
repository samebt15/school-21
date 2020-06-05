/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:09:00 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:09:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = ft_strnew(len);
	if (!substr)
		return (0);
	if (!s)
		return (0);
	else if (substr)
		ft_memcpy(substr, s + start, len);
	return (substr);
}
