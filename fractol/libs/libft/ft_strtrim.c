/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:08:29 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	checklen(char const *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	while (s[i])
	{
		len++;
		i++;
	}
	if (len == 0)
		return (0);
	while ((s[--i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		len--;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	char	*res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	len = checklen(s) + 1;
	i = 0;
	j = 0;
	if (!(res = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	while (j < len - 1)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
