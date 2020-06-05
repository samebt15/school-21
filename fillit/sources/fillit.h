/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:26:58 by hstark            #+#    #+#             */
/*   Updated: 2020/01/24 10:27:00 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include "../libft/libft.h"
# include <fcntl.h>

typedef	struct	s_tet
{
	int	x1f;
	int	x1l;
	int	y1f;
	int	y1l;
	int	x2f;
	int	x2l;
	int	y2f;
	int	y2l;
}				t_tet;

typedef	struct	s_coords
{
	int	xtopl;
	int	ytopl;
	int	xdownr;
	int	ydownr;
}				t_coords;

typedef	struct	s_dlst
{
	char			**tetra;
	int				height;
	int				width;
	int				priority;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}				t_dlst;

typedef	struct	s_map
{
	char			**map;
	int				n;
}				t_map;

t_dlst			*ft_dlst_new(char **tetra, int priority, int height, int width);
t_dlst			*ft_dlst_add(t_dlst **head, t_dlst *new_elem);
t_dlst			*ft_dlst_del_all(t_dlst **head);
t_dlst			*ft_dlst_find(t_dlst *elem, int priority);
int				ft_check_tetra(char **tetra);
t_dlst			*ft_validate_main(int fd);
int				ft_add_tetra(char **lines, t_dlst **list);
void			ft_place_ints(int *d1, int *d2, int s1, int s2);
int				backtraking_main(t_dlst **head);
t_map			*find_sol(t_map *map, t_dlst *temp, int x, int y);
t_map			*map_gen(int size);
int				tetra_place(t_map *map, t_dlst *tet, int x, int y);

#endif
