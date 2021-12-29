/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:40:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/29 00:59:46 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_mapwall(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->wall, i * 100, j * 100);
}

void    ft_map_pla(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx,game->window,game->player, i * 100, j * 100);
}

void    ft_mapcoll(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->collect, i * 100, j * 100);
}

void    ft_mapexit(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game ->window, game->exitus, i * 100, j * 100);
}

void    ft_map_path(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->path, i * 100, j * 100);
}