/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:45:44 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 12:14:29 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi_base(char *str, int	base)
{
	long long int	num;

	num = 0;
	while (ft_isspace(*str))
		str++;
	while ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'f') || (*str >= 'A' && *str <= 'F'))
	{
		if (*str >= '0' && *str <= '9')
			num = num * base + *str - '0';
		if (*str >= 'a' && *str <= 'f')
			num = num * base + *str - 'a' + 10;
		if (*str >= 'A' && *str <= 'F')
			num = num * base + *str - 'A' + 10;
		str++;
	}
	return (num);
}
