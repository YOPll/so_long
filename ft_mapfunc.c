/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:40:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/24 19:07:55 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_mapwall(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->wall, i * 30, j * 30);
}

void    ft_map_pla(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx,game->window,game->player, i * 30, j * 30);
}

void    ft_mapcoll(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->collect, i * 30, j * 30);
}

void    ft_mapexit(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game ->window, game->exitus, i * 30, j * 30);
}

void    ft_map_path(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->path, i * 30, j * 30);
}