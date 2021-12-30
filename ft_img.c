/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:47:42 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/30 16:31:46 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_img(t_so_long *game)
{
    game->t_path = "./assets/Path.xpm";
    game->path = mlx_xpm_file_to_image(game->mlx,game->t_path,&game->i,&game->j);
    game->t_ply = "./assets/player.xpm";
    game->player = mlx_xpm_file_to_image(game->mlx,game->t_ply,&game->i,&game->j);
    game->t_exit = "./assets/exit.xpm";
    game->exitus = mlx_xpm_file_to_image(game->mlx,game->t_exit,&game->i,&game->j);
    game->t_col = "./assets/collect.xpm";
    game->collect = mlx_xpm_file_to_image(game->mlx,game->t_col,&game->i,&game->j);
    game->t_wall = "./assets/wall.xpm";
    game->wall = mlx_xpm_file_to_image(game->mlx,game->t_wall,&game->i,&game->j);
    
}
void    ft_playerpos(int i, int j, t_so_long *game)
{
    game->myplayer.v = i;
    game->myplayer.h = j;
    ft_map_pla(i, j, game);
}

void    ft_collpos(int  i, int  j, t_so_long *game)
{
    game->coll_sum++;
    game->collected++;
    ft_mapcoll(i, j, game);
}