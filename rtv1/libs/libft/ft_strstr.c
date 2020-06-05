/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:34:26 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:11:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;
	int		flag;

	if (!ft_strlen(little))
		return ((char *)big);
	i = -1;
	flag = 0;
	while (*(big + ++i) && !flag)
	{
		if (*(big + i) == *(little + 0))
		{
			j = 0;
			k = i;
			flag = 1;
			while (*(little + j))
				if (*(little + j++) != *(big + k++))
					flag = 0;
			if (flag)
				return ((char *)big + i);
		}
	}
	return (NULL);
}
