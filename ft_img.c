/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:47:42 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/23 19:02:15 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_img(t_so_long *game)
{
    game->t_path = "./assets/Path";
    game->path = mlx_xpm_file_to_image(game->mlx,game->t_path,&game->i,&game->j);
    game->t_ply = "./assets/player";
    game->player = mlx_xpm_file_to_image(game->mlx,game->t_ply,&game->i,&game->j);
    game->t_exit = "./assets/";
    game->exitus = mlx_xpm_file_to_image(game->mlx,game->t_exit,&game->i,&game->j);
    game->t_col = "./assets/";
    game->collect = mlx_xpm_file_to_image(game->mlx,game->t_col,&game->i,&game->j);
    game->t_wall = "./assets/";
    game->wall = mlx_xpm_file_to_image(game->mlx,game->t_ply,&game->i,&game->j);
    
}