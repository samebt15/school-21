/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugh-be <bhugh-be@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:23:25 by bhugh-be          #+#    #+#             */
/*   Updated: 2019/04/21 19:11:43 by bhugh-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF
#define FDF

#define R_KOEF 0.01
#define KEY_H 2

#include <mlx.h>
#include "libft.h"
#include <portaudio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

typedef struct 		s_dot
{
	int 			z;
	int				hz;
	int 			c;
} 					t_dot;

typedef struct 		s_line
{
	double 			x0;
	double 			y0;
	double 			x1;
	double 			y1;
	double			z0;
	double			z1;
	int 			c0;
	int 			c1;
	int				steep;
	char 			*data;
	double			gradient;
	double			intery;
	double			xpxl1;
	double			xpxl2;
	double			ypxl1;
	double			ypxl2;
} 					t_line;

typedef struct		s_mouse
{
	int				x;
	int				y;
	int				buttons;
}					t_mouse;

typedef struct		s_values
{
	t_mouse			mouse;
	t_dot			**dots;
	int				keys;
	int				h;
	int				w;
	char			*data;
	void 			*mlx_ptr;
	void 			*win_ptr;
	void 			*img_ptr;
	int 			bits_per_pixel;
	int 			size_line;
	int				endian;
	int				dx;
	int				dy;
	int				offx;
	int				offy;
	int				scale;
	int				win_w;
	int				win_h;
	int				num_chanels;
	int				sample_rate;
	int				bytes_per_sample;
	int				mean;
	int				wav;
	char			*wav_file;
	PaStream		*stream;
	PaSampleFormat	sampleFormat;
	int				sync;
}					t_values;

void 				wu_algorithm(t_line *line, t_values *values);
void				get_dots(char *file, t_values *values);
void				drawmatrix(t_values *values);
int 				mouse_press(int button, int x, int y, void *param);
int  				mouse_release(int button, int x, int y, void *param);
int  				mouse_move(int x, int y, void *param);
int 				key_press(int keycode, void *param);
int 				key_release(int keycode, void *param);
int 				close_window(void *param);
int					get_color(t_line *line, int x, int y, double alpha);
void				set_default(t_values *values);
int					play(t_values *values);
int					draw_hook(void *param);
int					cross(int a, int b, int c, int d);
void				validation_wav(t_values *values);
void				port_audio_open(t_values *values);
void				free_array(void *data);

#endif
