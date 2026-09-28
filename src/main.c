/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:24:06 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/28 12:47:02 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

// TODO change the main with the argc & argv
char	**build_test_map(void)
{
	char	**grid;

	grid = malloc(sizeof(char *) * 6);
	grid[0] = ft_strdup("111111");
	grid[1] = ft_strdup("100001");
	grid[2] = ft_strdup("100001");
	grid[3] = ft_strdup("100001");
	grid[4] = ft_strdup("111111");
	grid[5] = NULL;
	return (grid);
}

int	main(void)
{
	t_data	data;

	ft_bzero(&data, sizeof(t_data));
	ft_bzero(&data.keys, sizeof(t_keys));
	data.map.grid = build_test_map();
	data.map.width = 6;
	data.map.height = 5;
	data.map.floor_color[0] = 0;
	data.map.floor_color[1] = 100;
	data.map.floor_color[2] = 200;
	data.map.ceiling_color[0] = 150;
	data.map.ceiling_color[1] = 150;
	data.map.ceiling_color[2] = 150;
	data.map.images.paths[NORTH] = "./src/game/assets/ne_texture.xpm";
	data.map.images.paths[SOUTH] = "./src/game/assets/so_texture.xpm";
	data.map.images.paths[WEST] = "./src/game/assets/we_texture.xpm";
	data.map.images.paths[EAST] = "./src/game/assets/se_texture.xpm";
	data.player.x = 2.5;
	data.player.y = 2.5;
	data.player.dir_x = 0.707;
	data.player.dir_y = 0.707;
	data.player.plane_x = -0.66;
	data.player.plane_y = 0.66;
	game(&data);
	return (0);
}
