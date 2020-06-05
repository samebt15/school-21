/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:36:16 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:36:20 by hstark           ###   ########.fr       */
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
