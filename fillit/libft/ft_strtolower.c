/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:47:39 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:47:40 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *s)
{
	int		i;
	char	*news;

	if (s == NULL)
		return (NULL);
	news = ft_strnew(ft_strlen(s));
	if (news == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		news[i++] = ft_tolower(*s);
		s++;
	}
	return (news);
}
