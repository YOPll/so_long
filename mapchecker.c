/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapchecker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:20:09 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/22 16:58:23 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int checkmapl(t_so_long *game)
{
    int h;
    int w;
    
    h = 0;
    w = 0;
    while (h < game->.img_height)
    {
        if (game->map.map[h][w] != '1')
            return (-1);
        h++;
    }
    h = 0;
    w = 0;
    while (w < game->img_width)
    {
        if (game->map.map[h][w] != '1')
            return (-1);
        w++;
    }
    return (0);
}
int checkmap_lf(t_so_long *game)
{
    int h;
    int w;

    h = 0;
    w = game->img_width - 1;
    while (h < game->img_height)
    {
        if (game->map.map[h][w] != '1')
            return (-1);
        h++
    }
    h = game->img_height;
    w = 0;
    while (w < game->img_width)
    {
        if (game.map.map[h][w] != '1')
            return (-1);
        w++;
    }
    return (0);
}
int checkfullmap(t_so_long *game)
{
    int     h;
    int     w;
    char    x;
    
    h = 0;
    w = 0;
    while (h < game->img_height)
    {
        while (w < game->img_width)
        {
            x = game.map.map[h][w];
            if (x != '0' && x != '1' && x != 'C' && x != 'P' && x != 'E')
                return (-1);
            w++
        }
        h++;
        w = 0;
    }
    return (0);
}
int check_PCE(t_so_long *game)
{
    int h;
    int w;

    h = 0;
    w = 0;
    while (h < game->img_height)
    {
        while (w < game->img_width)
        {
            if (game.map.map[h][w] == 'P')
                game->p_count++;
            else if (game.map.map[h][w] == 'C')
                game->c_count++;
            else if (game.map.map[h][w] == 'E')
                game->e_count++;
            w++;
        }
        h++;
        w = 0;
    }
    if (game->p_count < 1 || game->e_count < 1 || game->c_count < 1)
        return (-1);
    else
        return (0);
}

void    checker(t_so_long *game)
{
    if (checkfullmap(game) == -1 || check_PCE(game) == -1 || checkmapl(game) == -1 || checkmap_lf(game) == -1 || checksquare(game) == -1)
    {
        perror("Error\n");
        perror("something wrong with your map");
        exit(1);
    }
}