/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 14:53:31 by hstark            #+#    #+#             */
/*   Updated: 2020/02/20 12:15:29 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void		validation(char **str)
{
	if (ft_strcmp(str[0], "cam:") == 0)
		val_1(str, 7);
	else if (ft_strcmp(str[0], "sphere:") == 0)
		val_1(str, 9);
	else if (ft_strcmp(str[0], "plane:") == 0)
		val_1(str, 11);
	else if (ft_strcmp(str[0], "cylinder:") == 0 ||
			ft_strcmp(str[0], "cone:") == 0)
		val_1(str, 12);
	else if (ft_strcmp(str[0], "light:") == 0)
		val_1(str, 5);
	else if (ft_strcmp(str[0], "ambient:") == 0)
		val_1(str, 2);
}

static void	ft_check(char **res, char **line, t_mlx *mlx)
{
	if (ft_strcmp(res[0], "sphere:") == 0 ||
			ft_strcmp(res[0], "plane:") == 0 ||
			ft_strcmp(res[0], "cylinder:") == 0 ||
			ft_strcmp(res[0], "cone:") == 0)
		mlx->obj_num++;
	else if (ft_strcmp(res[0], "light:") == 0)
		mlx->light_num++;
	else if (ft_strcmp(res[0], "cam:") == 0)
		mlx->cam_is++;
	free_mass(res);
	ft_strdel(line);
}

void		obj_counter(t_mlx *mlx, char *str, int fd, char *line)
{
	char	**res;

	if ((fd = open(str, O_RDONLY)) < 0)
		ft_error("Can't open the file");
	while (get_next_line(fd, &line) > 0)
	{
		res = ft_strsplit(line, ' ');
		if (!res || !res[0])
			ft_error("Empty string in the file");
		else
			ft_check(res, &line, mlx);
	}
	ft_strdel(&line);
	if (mlx->cam_is != 1 || mlx->light_num == 0 || mlx->obj_num < 1)
		ft_error("Have no objects/lights/camera");
	mlx->obj = ft_memalloc(sizeof(t_object) * mlx->obj_num);
	mlx->light = ft_memalloc(sizeof(t_light) * mlx->light_num);
	close(fd);
}

void		split_parse(char **str, t_mlx *mlx)
{
	if (ft_strcmp(str[0], "cam:") == 0)
		cam_data(mlx, str);
	else if (ft_strcmp(str[0], "sphere:") == 0)
		sphere_data(mlx, str);
	else if (ft_strcmp(str[0], "plane:") == 0)
		plane_data(mlx, str);
	else if (ft_strcmp(str[0], "cylinder:") == 0)
		cylinder_data(mlx, str);
	else if (ft_strcmp(str[0], "cone:") == 0)
		cone_data(mlx, str);
	else if (ft_strcmp(str[0], "light:") == 0)
		light_data(mlx, str);
	else if (ft_strcmp(str[0], "ambient:") == 0)
		ambient_data(mlx, str);
}

void		ft_parse(t_mlx *mlx, char *str)
{
	char	*line;
	int		fd;
	char	**spl_res;

	line = NULL;
	obj_counter(mlx, str, 0, line);
	if ((fd = open(str, O_RDONLY)) < 0)
		ft_error("Can't open the file");
	while (get_next_line(fd, &line) > 0)
	{
		line_valid(line);
		spl_res = ft_strsplit(line, ' ');
		validation(spl_res);
		split_parse(spl_res, mlx);
		ft_strdel(&line);
		free_mass(spl_res);
	}
	ft_strdel(&line);
	close(fd);
}
