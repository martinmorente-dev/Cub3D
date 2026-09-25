/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:28:18 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/23 11:28:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3D.h"

void	destroy_images(t_data *data)
{
	t_images	*images;

	images = &data->map.images;
	if (images->textures[NORTH].img_ptr)
		mlx_destroy_image(data->mlx, images->textures[NORTH].img_ptr);
	if (images->textures[SOUTH].img_ptr)
		mlx_destroy_image(data->mlx, images->textures[SOUTH].img_ptr);
	if (images->textures[EAST].img_ptr)
		mlx_destroy_image(data->mlx, images->textures[EAST].img_ptr);
	if (images->textures[WEST].img_ptr)
		mlx_destroy_image(data->mlx, images->textures[WEST].img_ptr);
}
