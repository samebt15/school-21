/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:26:13 by hstark            #+#    #+#             */
/*   Updated: 2020/05/22 10:29:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		rez;
	size_t	i;

	i = 0;
	rez = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	while ((s1[i] != '\0') && (s2[i] != '\0') &&
		(s1[i] == s2[i]) && (i != n - 1))
	{
		i++;
	}
	rez = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (rez == 0)
		return (1);
	return (0);
}
