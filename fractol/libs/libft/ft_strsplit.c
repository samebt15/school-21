/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:30:46 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_clear(char **res, int *lens)
{
	int		i;

	free(lens);
	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

static int	*ft_countc(const char *s, char c, int len, int words)
{
	int		i;
	int		*lens;
	int		count;
	int		j;

	i = 0;
	j = 0;
	lens = (int*)malloc(sizeof(int) * words);
	while (i < len && s[i])
	{
		count = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		lens[j] = count;
		j++;
	}
	return (lens);
}

static int	ft_count(const char *s, char c, int len)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (1);
	while (i < len && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_mal(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	int		len;
	int		*lens;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(res = (char**)malloc(sizeof(char*) * (ft_count(s, c, len) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	lens = ft_countc(s, c, len, ft_count(s, c, len));
	while (++i < ft_count(s, c, len))
		if (!(res[i] = (char*)malloc(sizeof(char) * (lens[i]) + 1)))
		{
			ft_clear(res, lens);
			return (NULL);
		}
	free(lens);
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	if (!(res = ft_mal(s, c)))
		return (NULL);
	while (i < ft_count(s, c, ft_strlen(s) - 1))
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			res[i][k] = s[j];
			j++;
			k++;
		}
		res[i][k] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
