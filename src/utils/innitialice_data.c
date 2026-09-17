/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   innitialice_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:38:08 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/17 11:34:45 by mmorente         ###   ########.fr       */
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

int innitialice_images(t_data *data)
{
  int       width;
  int       heigth;
  t_images  *imgs;

  imgs = &data->map.images;
  imgs->ea_img = mlx_xpm_file_to_image(data->mlx, imgs->ea_path, &width, &heigth);
  imgs->no_img = mlx_xpm_file_to_image(data->mlx, imgs->no_path, &width, &heigth);
  imgs->we_img = mlx_xpm_file_to_image(data->mlx, imgs->we_path, &width, &heigth);
  imgs->so_img = mlx_xpm_file_to_image(data->mlx, imgs->so_path, &width, &heigth);

  if (!imgs->ea_img || !imgs->we_img || !imgs->no_img || !imgs->so_img)
    return (0);
  return (1);
}
