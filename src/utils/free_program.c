/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:59:22 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/16 16:25:55 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3D.h"

void free_matrix(void **pt)
{
  int i;

  i = 0;
  while (pt[i]) {
    free(pt[i]);
    i++;
  }
  free(pt);
}

void free_map_st(t_map map)
{
  free_matrix((void **)map.grid);
  // TODO free the floor color & ceiling if there is any reservation with malloc / calloc / etc
}

void free_program(t_data *data)
{
  free_map_st(data->map);
}
