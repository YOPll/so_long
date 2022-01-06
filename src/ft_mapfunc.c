/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:40:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/06 22:01:56 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mapwall(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window, game->wall,
		j * 100, i * 100);
}

void	ft_map_pla(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window, game->player,
		j * 100, i * 100);
}

void	ft_mapcoll(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window, game->collect,
		j * 100, i * 100);
}

void	ft_mapexit(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game ->window, game->exitus,
		j * 100, i * 100);
}

void	ft_map_path(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->path, j * 100, i * 100);
}
