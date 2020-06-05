/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:47:45 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:47:46 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *s)
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
		news[i++] = ft_toupper(*s);
		s++;
	}
	return (news);
}
