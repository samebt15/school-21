/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:40:08 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:40:10 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isin(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int					i;
	long long int		nbr;
	int					negative;
	char				*whitespaces;
	long long int		check;

	whitespaces = "\t \n\v\r\f";
	nbr = 0;
	negative = 1;
	i = 0;
	while (isin(str[i], whitespaces))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	check = 0;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (10 * nbr) + (int)str[i++] - '0';
		if ((nbr / 10) != check)
			return (negative == 1 ? -1 : 0);
		check = nbr;
	}
	return (nbr * negative);
}
