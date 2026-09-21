/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:45:38 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/21 12:54:09 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3D.h"

void destroy_images(t_data *data)
{
  t_images *images;

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

int close_window(t_data *data)
{
  destroy_images(data);
  mlx_destroy_window(data->mlx, data->win);
  mlx_destroy_display(data->mlx);
  free_program(data);
  exit(EXIT_SUCCESS);
  return (0);
}

void window_control(t_data *data)
{
  mlx_hook(data->win, 17, 1L << 17, (int (*)())(void *)close_window, data);
}

void window(t_data *data)
{
  innitialice_graphic_data(data);
  window_control(data);
  mlx_loop(data->mlx);
}
