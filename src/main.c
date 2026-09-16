/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:24:06 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/16 17:04:27 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

// TODO change the main with the argc & argv

int main(void) {
  t_data *data;

  data = malloc(sizeof(t_data));
  if (!data)
  {
    ft_printf("Error allocating the data\n");
    return (1);
  }
  window(data);
  return (0);
}
