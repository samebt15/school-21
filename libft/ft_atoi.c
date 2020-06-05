/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:38:09 by hstark            #+#    #+#             */
/*   Updated: 2019/12/28 15:38:11 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	short			i;
	short			minus;
	long long int	ans;

	i = 0;
	minus = 1;
	ans = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '\e')
		return (0);
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ans != (ans * 10 + (str[i] - '0')) / 10)
			return (minus < 0 ? 0 : -1);
		ans = ans * 10 + (str[i++] - '0');
	}
	return ((int)ans * minus);
}
