/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 22:11:51 by yopi              #+#    #+#             */
/*   Updated: 2022/01/05 20:01:46 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_w(t_so_long *game)
{
	int	i;
	int	j;

	i = game->myplayer.v;
	j = game->myplayer.h;
	if (game->map.map[i - 1][j] == '0' || game->map.map[i - 1][j] == 'C')
	{
		game->myplayer.v--;
		if (game->map.map[i - 1][j] == 'C')
			game->collected--;
		if (game->collected == 0)
			ft_checkopen(game);
		ft_refresh(i, j, game);
		game->steps++;
		printf("%d\n",game->steps);
	}
	else if (game->map.map[i - 1][j] == 'E')
	{
		game->myplayer.v--;
		ft_refresh(i, j, game);
		ft_collcheck(game);
		game->steps++;
		printf("%d\n",game->steps);
	}
}

void	ft_s(t_so_long *game)
{
	int	i;
	int	j;

	i = game->myplayer.v;
	j = game->myplayer.h;
	if (game->map.map[i + 1][j] == '0' || game->map.map[i + 1][j] == 'C')
	{
		game->myplayer.v++;
		if (game->map.map[i + 1][j] == 'C')
			game->collected--;
		if (game->collected == 0)
			ft_checkopen(game);
		ft_refresh(i, j, game);
		game->steps++;
		printf("%d\n",game->steps);
	}
	else if (game->map.map[i + 1][j] == 'E')
	{
		game->myplayer.v++;
		ft_refresh(i, j, game);
		ft_collcheck(game);
		game->steps++;
		printf("%d\n",game->steps);
	}
}

void	ft_a(t_so_long *game)
{
	int	i;
	int	j;

	i = game->myplayer.v;
	j = game->myplayer.h;
	if (game->map.map[i][j - 1] == '0' || game->map.map[i][j - 1] == 'C')
	{
		game->myplayer.h--;
		if (game->map.map[i][j - 1] == 'C')
			game->collected--;
		if (game->collected == 0)
			ft_checkopen(game);
		ft_refresh(i, j, game);
		game->steps++;
		printf("%d\n",game->steps);
	}
	else if (game->map.map[i][j - 1] == 'E')
	{
		game->myplayer.h--;
		ft_refresh(i, j, game);
		ft_collcheck(game);
		game->steps++;
		printf("%d\n",game->steps);
	}
}

void	ft_d(t_so_long *game)
{
	int	i;
	int	j;

	i = game->myplayer.v;
	j = game->myplayer.h;
	if (game->map.map[i][j + 1] == '0' || game->map.map[i][j + 1] == 'C')
	{
		game->myplayer.h++;
		if (game->map.map[i][j + 1] == 'C')
			game->collected--;
		if (game->collected == 0)
			ft_checkopen(game);
		ft_refresh(i, j, game);
		game->steps++;
		printf("%d\n",game->steps);
	}
	else if (game->map.map[i][j + 1] == 'E')
	{
		game->myplayer.h++;
		ft_refresh(i, j, game);
		ft_collcheck(game);
		game->steps++;
		printf("%d\n",game->steps);
	}
}

int	ft_move(int keycode, t_so_long *game)
{
	if (keycode == 53)
		ft_exit();
	if (keycode == 13)
		ft_w(game);
	if (keycode == 1)
		ft_s(game);
	if (keycode == 0)
		ft_a(game);
	if (keycode == 2)
		ft_d(game);
	return (0);
}
