/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:19:40 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t		ft_copyuntil(char **dst, char *src, char c)
{
	size_t	i;
	char	*res;
	char	*tmp;

	tmp = *dst;
	i = -1;
	while (src[++i] != '\0')
		if ((unsigned char)src[i] == (unsigned char)c)
			break ;
	res = ft_strndup(src, i);
	if (!(*dst = ft_strjoin(*dst, res)))
	{
		free(res);
		return (0);
	}
	free(res);
	if (tmp)
		free(tmp);
	return (i);
}
