/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 02:47:37 by yopi              #+#    #+#             */
/*   Updated: 2022/01/03 19:00:08 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_trapcheck(t_so_long *game)
{
	int	i;
	int	j;

	i = game->myplayer.v;
	j = game->myplayer.h;
	if (game->map.map[i][j] == 'T')
	{
		printf("oooo  oooooooooo         ooooooo	oooooooo8  ooooooooooo \n");
		printf(" 888    88  888        o888   888o 888         88  888  88 \n");
		printf(" 888    88  888        888     888  888oooooo      888     \n");
		printf(" 888    88  888      o 888o   o888         888     888     \n");
		printf("  888oo88  o888ooooo88   88ooo88   o88oooo888     o888o    \n");
		ft_exit();
	}
}

void	ft_checkopen(t_so_long *game)
{
	if (game->collected == 0)
		game->t_exit = "./assets/exit1.xpm";
}
