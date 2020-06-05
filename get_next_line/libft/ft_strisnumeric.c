/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnumeric.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:34:04 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:37:56 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnumeric(const char *s)
{
	if (s == NULL)
		return (0);
	while (s)
	{
		if (ft_isdigit(*s) || *s == '-')
			s++;
		else
			return (0);
	}
	return (1);
}
