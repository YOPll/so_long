/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:40:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/03 19:30:47 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mapwall(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window, game->wall,
		j * 100, i * 100);
	mlx_put_image_to_window(game->mlx, game->window, game->collecus, 0, 5);
	mlx_string_put(game->mlx, game->window, 45, 30, 0xFFE066,
		ft_itoa(game->collected));
	mlx_string_put(game->mlx, game->window, 60, 30, 0xFFFFFF, "LEFT");
	mlx_put_image_to_window(game->mlx, game->window, game->stepsus, 13, 50);
	mlx_string_put(game->mlx, game->window,
		47, 68, 0xFFE066, ft_itoa(game->steps));
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
	if (game->collected != 0)
		mlx_put_image_to_window(game->mlx, game ->window, game->exitus,
			j * 100, i * 100);
	else
		mlx_put_image_to_window(game->mlx, game ->window, game->exitopen,
			j * 100, i * 100);
}

void	ft_map_path(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->path, j * 100, i * 100);
}
