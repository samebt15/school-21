/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:58:33 by SstarZ            #+#    #+#             */
/*   Updated: 2020/02/11 17:30:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					i;
	long long int		res;
	long long int		neg;

	res = 0;
	i = 0;
	neg = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
				|| str[i] == '\f' || str[i] == '\n' || str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
	}
	else
		i--;
	while (str[++i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		res *= 10;
		res += str[i] - '0';
	}
	res *= neg;
	return ((int)res);
}
