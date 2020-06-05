/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 12:54:33 by hstark            #+#    #+#             */
/*   Updated: 2020/01/15 13:41:24 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char		*gnlgetn(char **g)
{
	char	*tmp;
	char	*temp;
	size_t	i;
	char	*s;

	s = *g;
	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	tmp = ft_strnew(i);
	tmp = ft_strncpy(tmp, s, i);
	temp = ft_strnew(ft_strlen(&(s[i + 1])));
	temp = ft_strncpy(temp, &s[i + 1], ft_strlen(&s[i]));
	free(*g);
	*g = temp;
	return (tmp);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*txt[12000];
	char			buff[BUFF_SIZE + 1];
	int				check;

	if ((read(fd, buff, 0) < 0) || line == NULL)
		return (-1);
	while (ft_findch(txt[fd], '\n') == 0)
	{
		check = read(fd, buff, BUFF_SIZE);
		buff[check] = '\0';
		if (check <= 0)
			break ;
		txt[fd] = ft_strjoinfree(txt[fd], buff);
	}
	if (ft_strlen(txt[fd]) || check > 0)
	{
		*line = gnlgetn(&txt[fd]);
		return (1);
	}
	if (txt[fd])
	{
		free(txt[fd]);
		txt[fd] = NULL;
	}
	return (0);
}
