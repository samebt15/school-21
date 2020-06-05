/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:39:54 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 14:39:22 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int i;

	i = 0;
	if (n >= 0)
	{
		while (n >= 10)
		{
			n /= 10;
			i++;
		}
		return (i + 1);
	}
	else
	{
		while (n <= -10)
		{
			n /= 10;
			i++;
		}
		return (i + 2);
	}
}

char		*ft_itoa(int n)
{
	char	*ans;
	int		len;

	len = ft_intlen(n);
	if ((ans = ft_strnew(len)) == NULL)
		return (NULL);
	if (n == 0)
		return (ft_strcpy(ft_strnew(1), "0"));
	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ans[0] = '-';
	}
	while (n)
	{
		ans[--len] = ((n % 10) + '0');
		n /= 10;
	}
	return (ans);
}
