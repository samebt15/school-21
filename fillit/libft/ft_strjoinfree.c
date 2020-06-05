/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:45:50 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:45:51 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;
	int		i;

	i = 0;
	if (s1 != NULL)
		len1 = ft_strlen(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	else
		len2 = 0;
	newstr = ft_strnew(len1 + len2);
	if (newstr == NULL)
		return (NULL);
	ft_strncat(newstr, s1, len1);
	ft_strncat(newstr, s2, len2);
	free(s1);
	s1 = NULL;
	return (newstr);
}
