/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:14:38 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/17 11:43:22 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3D.h"

void  game(t_data *data)
{
  window(data);
  if (innitialice_images(data))
  {
    // TODO make the raycasting func to render the map & player
  }
  else
  {
    ft_printf("Error\nBad assets\n");
		ft_printf("Possible errors:\n");
		ft_printf("--> xpm file expected\n");
		ft_printf("--> file doesn't exist\n");
		ft_printf("--> incorrect permissions for file\n");
    close_window(data);
  }
}
