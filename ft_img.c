/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:47:42 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/01 21:15:24 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_img(t_so_long *game)
{
    game->t_path = "./assets/Path.xpm";
    game->path = mlx_xpm_file_to_image(game->mlx, game->t_path, &game->i, &game->j);
    game->t_exit = "./assets/exit.xpm";
    game->exitus = mlx_xpm_file_to_image(game->mlx, game->t_exit, &game->i, &game->j);
    game->t_col = "./assets/collect.xpm";
    game->collect = mlx_xpm_file_to_image(game->mlx, game->t_col, &game->i, &game->j);
    game->t_wall = "./assets/wall.xpm";
    game->wall = mlx_xpm_file_to_image(game->mlx, game->t_wall, &game->i, &game->j);
    game->t_steps = "./assets/steps.xpm";
    game->stepsus = mlx_xpm_file_to_image(game->mlx, game->t_steps, &game->i, &game->j);
    game->t_collect = "./assets/collected1.xpm";
    game->collecus = mlx_xpm_file_to_image(game->mlx, game->t_collect, &game->i, &game->j);
    game->t_trap = "./assets/Spike.xpm";
    game->trap = mlx_xpm_file_to_image(game->mlx, game->t_trap, &game->i, &game->j);
    game->t_open = "./assets/exit1.xpm";
    game->exitopen = mlx_xpm_file_to_image(game->mlx, game->t_open, &game->i, &game->j);
}
void ft_playerpos(int i, int j, t_so_long *game)
{
    const char  *player[9] = {"./assets/1.xpm", "./assets/2.xpm", "./assets/3.xpm", "./assets/4.xpm", "./assets/5.xpm", "./assets/6.xpm", "./assets/7.xpm", "./assets/8.xpm"};
    static int x = 0;
    
    if (x == 8)
        x = 0;
    game->myplayer.v = i;
    game->myplayer.h = j;
    game->player = mlx_xpm_file_to_image(game->mlx, (char *)player[x], &game->i, &game->j);
    ft_map_pla(i, j, game);
}

void ft_collpos(int i, int j, t_so_long *game)
{
    game->coll_sum++;
    game->collected++;
    ft_mapcoll(i, j, game);
}

void    ft_enemypos(int i,int j, t_so_long *game)
{
    game->enemy.v = i;
    game->enemy.h = j;
    ft_map_trap(i,j,game);
}