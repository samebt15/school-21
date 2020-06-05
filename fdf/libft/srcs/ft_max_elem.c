/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:49:31 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 11:49:32 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_max_elem(int arr[], int size)
{
	int			i;
	int			max;

	i = 0;
	max = arr[0];
	while (i < size)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}