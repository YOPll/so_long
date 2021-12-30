/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syncmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:18:09 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/30 18:15:42 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_map_update(int x, int y, t_so_long *game)
{
    int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[x][y] == 'E' || game->map.map[x][y] == 'G')
    {
        game->map.map[x][y] = 'E';
        game->map.map[i][j] = 'P';
    }
    else
    {
        game->map.map[x][y] = '0';
        if (game->map.map[i][j] == 'E')
            game->map.map[i][j] = 'G';
        else
            game->map.map[i][j] = 'P';
    }
}
void    ft_syncmap(int x, int y, t_so_long *game)
{
    int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[x][y] == 'E' || game->map.map[x][y] == 'G')
    {
        ft_map_pla(i, j, game);
        ft_mapwall(x, y, game);
        ft_map_path(x, y, game);
        ft_mapexit(x, y, game);
    }
    else
    {
        ft_map_path(x, y, game);
        if (game->map.map[x][y] == 'E')
        {
            ft_map_path(x, y, game);
            ft_mapexit(x, y, game);
        }
        else
            ft_map_pla(i, j, game);
    }
}