/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:23:21 by hstark            #+#    #+#             */
/*   Updated: 2020/05/22 10:29:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (s == NULL)
		return (0);
	start = 0;
	if (ft_strlen(s) == 0)
		return (new = ft_memalloc(1));
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
	{
		start++;
	}
	while (end > 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
	{
		end--;
	}
	if (end > start)
		new = ft_strsub(s, start, (end - start) + 1);
	else
		return (new = ft_memalloc(1));
	if (!new)
		return (0);
	return (new);
}
