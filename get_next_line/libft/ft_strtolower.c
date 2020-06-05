/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:36:24 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:36:25 by hstark           ###   ########.fr       */
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
