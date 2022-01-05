/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:08:38 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/05 19:46:18 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_checkopen(t_so_long *game)
{
	if (game->collected == 0)
		game->t_exit = "./assets/exit1.xpm";
}

void	ft_refresh(int i, int j, t_so_long *game)
{
	ft_map_update(i, j, game);
	ft_syncmap(i, j, game);
}
