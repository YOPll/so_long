/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:23:03 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/17 17:23:56 by zyacoubi         ###   ########.fr       */
/*                                                                             */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

#include "minilibx/mlx.h"
#include "./libft/libft.h"
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>



typedef struct s_map
{
    char    **map;
}   t_map;

typedef struct s_player
{
    int h;
    int v;
    t_map   map;
}   t_player;

typedef struct s_so_long
{
    t_map       map;
    t_player    myplayer;

    void    *mlx;
    void    *window;
    void    *path;
    void    *player;
    void    *collect;
    void    *exitus;

    int c_count;
    int p_count;
    int e_count;

    int     steps;

    int     img_width;
    int     img_height;
    int     i;
    int     j;
}       t_so_long;

void    mapread(t_so_long *game, char *av[]);
int     count_maplines(char *av[]);
int     checkmap_l(t_so_long *game);

#endif