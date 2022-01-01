/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 16:41:33 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/01 21:40:21 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_trapcheck(t_so_long *game)
{
    int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
	if (game->map.map[i][j] == 'T')
		ft_exit();
}
void    ft_checkopen(t_so_long *game)
{
    if (game->collected == 0)
            game->t_exit = "./assets/exit1.xpm";

}