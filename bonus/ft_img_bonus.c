/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:47:42 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/06 17:08:08 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_img(t_so_long *game)
{
	int rand;
	rand = arc4random_uniform(4);
	game->t_path = "./assets/Path.xpm";
	game->path = mlx_xpm_file_to_image(game->mlx, game->t_path,
			&game->i, &game->j);
	game->t_exit = "./assets/exit.xpm";
	game->exitus = mlx_xpm_file_to_image(game->mlx, game->t_exit,
			&game->i, &game->j);
	game->t_col = "./assets/collect.xpm";
	game->collect = mlx_xpm_file_to_image(game->mlx, game->t_col,
			&game->i, &game->j);
	game->t_wall = "./assets/wall.xpm";
	game->wall = mlx_xpm_file_to_image(game->mlx, game->t_wall,
			&game->i, &game->j);
	game->t_steps = "./assets/steps.xpm";
	game->stepsus = mlx_xpm_file_to_image(game->mlx, game->t_steps,
			&game->i, &game->j);
	game->t_collect = "./assets/collected1.xpm";
	game->collecus = mlx_xpm_file_to_image(game->mlx, game->t_collect,
			&game->i, &game->j);
	game->t_open = "./assets/exit1.xpm";
	game->exitopen = mlx_xpm_file_to_image(game->mlx, game->t_open,
			&game->i, &game->j);
	game->t_trap = "./assets/enemy2l.xpm";
	game->trap = mlx_xpm_file_to_image(game->mlx, game->t_trap,
			&game->i, &game->j);
}

void	ft_playerpos(int i, int j, t_so_long *game)
{
	const char	*player[40] = {"./assets/1.xpm", "./assets/2.xpm",
		"./assets/3.xpm", "./assets/4.xpm", "./assets/5.xpm", "./assets/6.xpm",
		"./assets/7.xpm", "./assets/8.xpm", "./assets/9.xpm",
		"./assets/10.xpm", "./assets/11.xpm", "./assets/12.xpm",
		"./assets/13.xpm",
		"./assets/14.xpm", "./assets/15.xpm", "./assets/16.xpm",
		"./assets/17.xpm", "./assets/18.xpm", "./assets/19.xpm",
		"./assets/20.xpm", "./assets/21.xpm", "./assets/22.xpm",
		"./assets/23.xpm", "./assets/24.xpm", "./assets/25.xpm",
		"./assets/26.xpm", "./assets/27.xpm", "./assets/28.xpm",
		"./assets/29.xpm", "./assets/30.xpm", "./assets/31.xpm",
		"./assets/32.xpm", "./assets/33.xpm", "./assets/34.xpm",
		"./assets/35.xpm", "./assets/36.xpm", "./assets/37.xpm",
		"./assets/38.xpm", "./assets/39.xpm", "./assets/40.xpm"};
	static int	x = 0;

	if (x == 40)
		x = 0;
	game->myplayer.v = i;
	game->myplayer.h = j;
	game->player = mlx_xpm_file_to_image(game->mlx, (char *)player[x++],
			&game->i, &game->j);
	ft_map_pla(i, j, game);
	mlx_destroy_image(game->mlx, game->player);
}

void	ft_collpos(int i, int j, t_so_long *game)
{
	game->coll_sum++;
	game->collected++;
	ft_mapcoll(i, j, game);
}

void	ft_enemypos(int i, int j, t_so_long *game)
{
	static int x;
	int rand;
	
	if (++x < 25)
		return ;
	x = 0;
	ft_map_path(i, j, game);
	rand = arc4random_uniform(2);
	if (rand == 0)
	{
		game->t_trap = "./assets/enemy2l.xpm";
		game->trap = mlx_xpm_file_to_image(game->mlx, game->t_trap,
			&game->i, &game->j);
		ft_map_trap(i, j, game);
	}
	else if (rand == 1)
	{

		game->t_trap = "./assets/enemy2.xpm";
		game->trap = mlx_xpm_file_to_image(game->mlx, game->t_trap,
			&game->i, &game->j);
		ft_map_trap(i, j, game);
	}
}
