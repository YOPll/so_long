/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:08:38 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/06 22:07:37 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_map_trap(int i, int j, t_so_long *game)
{
	mlx_put_image_to_window(game->mlx, game->window, game->trap,
		j * 100, i * 100);
}

void	ft_refresh(int i, int j, t_so_long *game)
{
	ft_map_update(i, j, game);
	ft_syncmap(i, j, game);
}
