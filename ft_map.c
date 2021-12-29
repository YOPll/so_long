/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:30:52 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/28 22:22:16 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_mapt(t_so_long *game)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < game->img_width)
    {
        while (j < game->img_width)
        {
            if (game->map.map[i][j] == '1')
                ft_mapwall(i, j, game);
            else if(game->map.map[i][j] == 'P')
                ft_map_pla(i, j, game);
            else if (game->map.map[i][j] == 'C')
                ft_mapcoll(i, j, game);
            else if (game->map.map[i][j] == 'E')
                ft_mapexit(i, j, game);
            j++;
        }
        i++;
        j=0;
    }
}  

void    ft_map(t_so_long *game)
{
    int i;
    int j;
    
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