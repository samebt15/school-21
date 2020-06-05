/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:45:35 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 11:45:36 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	long long int	num;
	int				sign;
	long long int	tmp;

	num = 0;
	sign = 1;
	tmp = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		tmp = num;
		num = num * 10 + *str - '0';
		if (num < tmp)
			return (sign == -1 ? 0 : -1);
		str++;
	}
	return (num * sign);
}
