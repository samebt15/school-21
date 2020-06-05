/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:45:45 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:45:46 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*sc1;
	char	*sc2;

	sc1 = (char*)s1;
	sc2 = (char*)s2;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstr = ft_strnew(ft_strlen(sc1) + ft_strlen(sc2));
	if (newstr == NULL)
		return (NULL);
	ft_strcat(newstr, sc1);
	ft_strcat(newstr, sc2);
	return (newstr);
}
