/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:28:45 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:28:46 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argn, char **argv)
{
	int		fd;
	t_dlst	*head;

	if (argn != 2)
	{
		write(1, "usage: ./fillit target_file\n", 28);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (read(fd, NULL, 0) < 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (!(head = ft_validate_main(fd)))
	{
		write(1, "error\n", 6);
		return (0);
	}
	backtraking_main(&head);
	ft_dlst_del_all(&head);
	return (0);
}
