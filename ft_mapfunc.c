/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:40:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/30 21:51:43 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_mapwall(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->wall, j * 100, i * 100);
    mlx_put_image_to_window(game->mlx, game->window, game->collecus, 0, 5);
    mlx_string_put(game->mlx,game->window,45,30,0x00FFE066,ft_itoa(game->collected));
    mlx_string_put(game->mlx,game->window,60,30,0x00FFFFFF,"LEFT");
    mlx_put_image_to_window(game->mlx, game->window, game->stepsus, 13, 50);
    mlx_string_put(game->mlx,game->window,47,68,0x00FFE066,ft_itoa(game->steps));
}

void    ft_map_pla(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx,game->window,game->player, j * 100, i * 100);
}

void    ft_mapcoll(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->collect, j * 100, i * 100);
}

void    ft_mapexit(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game ->window, game->exitus, j * 100, i * 100);
}

void    ft_map_path(int i, int j, t_so_long *game)
{
    mlx_put_image_to_window(game->mlx, game->window, game->path, j * 100, i * 100);
}