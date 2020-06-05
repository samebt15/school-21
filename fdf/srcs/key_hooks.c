/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:40:47 by hstark            #+#    #+#             */
/*   Updated: 2020/01/29 11:40:48 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				key_press(int keycode, void *param)
{
	t_values	*values;

	values = (t_values *)param;
	if (keycode == 53)
		exit(0);
	if (keycode == 35)
	{
		if (!values->stream)
			play(values);
		else if (Pa_IsStreamStopped(values->stream))
			Pa_StartStream(values->stream);
		else
			Pa_StopStream(values->stream);
	}
	return (0);
}

int				key_release(int keycode, void *param)
{
	t_values *values;

	(void)keycode;
	values = (t_values *)param;
	return (0);
}

int				close_window(void *param)
{
	(void)param;
	exit(0);
}
