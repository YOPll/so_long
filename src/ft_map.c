/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:30:52 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/05 20:27:36 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_mapt(t_so_long *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->img_height)
	{
		while (j < game->img_width)
		{
			if (game->map.map[i][j] == '1')
				ft_mapwall(i, j, game);
			else if (game->map.map[i][j] == 'P')
				ft_playerpos(i, j, game);
			else if (game->map.map[i][j] == 'C' && game->z)
				ft_collpos(i, j, game);
			else if (game->map.map[i][j] == 'E')
				ft_mapexit(i, j, game);
			j++;
		}
		i++;
		j = 0;
	}
	return (game->z = 0, 0);
}

void	ft_map(t_so_long *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->img_height)
	{
		while (j < game->img_width)
		{
			ft_map_path(i, j, game);
			j++;
		}
		i++;
		j = 0;
	}
}
