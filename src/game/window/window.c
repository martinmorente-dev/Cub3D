/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:45:38 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/16 14:11:08 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3D.h"

void	destroy_images(t_data *data)
{
	if (data->map.no_path)
		mlx_destroy_image(data->mlx, data->map.no_path);
	if (data->map.ea_path)
		mlx_destroy_image(data->mlx, data->map.ea_path);
	if (data->map.so_path)
		mlx_destroy_image(data->mlx, data->map.so_path);
	if (data->map.we_path)
		mlx_destroy_image(data->mlx, data->map.we_path);
}

int		close_window(t_data *data)
{
	destroy_images(data);
	mlx_destroy_window(data->mlx, data->win);
	mlx_destroy_display(data->mlx);
	free_program(data);
	exit(EXIT_SUCCESS);
	return (0);
}

void	window_control(t_data *data)
{
	mlx_hook(data->win, 17, 1L << 17, close_window, data);
}

void	window(t_data *data)
{
	innitialice_graphic_data(data);

}
