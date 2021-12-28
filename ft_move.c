/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 22:11:51 by yopi              #+#    #+#             */
/*   Updated: 2021/12/28 16:48:26 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_w(t_so_long *game)
{
    int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[i - 1][j] == '0' || game->map.map[i - 1][j] == 'C')
    {
        if (game->map.map[i - 1][j] == 'C')
            game->collect--;
        game->myplayer.v--;
        game->steps++;
    }
    else if (game->map.map[i - 1][j] == 'E')
    {
        game->myplayer.v--;
        ft_collcheck(game);
        game->steps++;
        
    }
}

void    ft_s(t_so_long *game)
{
        int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[i][j - 1] == '0' || game->map.map[i][j - 1] == 'C')
    {
        if (game->map.map[i][j - 1] == 'C')
            game->collect--;
        game->myplayer.h--;
        game->steps++;
    }
}

void ft_a(t_so_long *game)
{
        int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[i + 1][j] == '0' || game->map.map[i + 1][j] == 'C')
    {
        if (game->map.map[i + 1][j] == 'C')
            game->collect--;
        game->myplayer.v++;
        game->steps++;
    }
}

void    ft_d(t_so_long *game)
{
    int i;
    int j;
    
    i = game->myplayer.v;
    j = game->myplayer.h;
    if (game->map.map[i][j + 1] == '0' || game->map.map[i][j + 1] == 'C')
    {
        if (game->map.map[i][j + 1] == 'C')
            game->collect--;
        game->myplayer.h++;
        game->steps++;
    }
}
int ft_move(int keycode, t_so_long *game)
{
    if(keycode == 53)
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