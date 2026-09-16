/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   innitialice_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:38:08 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/16 16:16:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3D.h"


void	innitialice_graphic_data(t_data *data)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Cub3D");
	data->mlx = mlx;
	data->win = mlx_win;
}

