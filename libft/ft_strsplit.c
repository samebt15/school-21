/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:47:17 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:47:18 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			words++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (words);
}

static int	ft_word_len(char const *s, char c)
{
	int len;

	len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != '\0')
		while (*s != c && *s != '\0')
		{
			len++;
			s++;
		}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(words = (char **)malloc(sizeof(*words) * ft_count_words(s, c) + 1)))
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		j = 0;
		if (!(words[i] = ft_strnew(ft_word_len(&s[k], c))))
			ft_freearr(words, i);
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			words[i][j++] = s[k++];
		i++;
	}
	words[i] = NULL;
	return (words);
}
