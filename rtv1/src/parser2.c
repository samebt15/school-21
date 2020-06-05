/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:19:56 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:15:46 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void	free_mass(char **mass)
{
	int i;

	i = 0;
	while (mass[i])
	{
		free(mass[i]);
		i++;
	}
	free(mass);
}

int		line_valid(char *line)
{
	if (ft_strncmp("cam: ", line, 5) == 0)
		return (1);
	if (ft_strncmp("light: ", line, 7) == 0)
		return (1);
	if (ft_strncmp("sphere: ", line, 8) == 0)
		return (1);
	if (ft_strncmp("cone: ", line, 6) == 0)
		return (1);
	if (ft_strncmp("cylinder: ", line, 10) == 0)
		return (1);
	if (ft_strncmp("plane: ", line, 7) == 0)
		return (1);
	if (ft_strncmp("ambient: ", line, 9) == 0)
		return (1);
	ft_error("Wrong input");
	return (0);
}

int		val_2(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 1)
			i++;
		else
			ft_error("Input is not number");
	}
	return (1);
}

void	val_1(char **str, size_t k)
{
	size_t i;

	if (k != ft_check_len(str))
		ft_error("not valid input");
	i = 1;
	while (i < k)
	{
		if (!str[i] || (ft_atoi(str[i]) == 0 && str[i][0] != '0') ||
		!val_2(str[i]))
			ft_error("Wrong input file");
		i++;
	}
}

size_t	ft_check_len(char **str)
{
	size_t i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	return (i);
}
