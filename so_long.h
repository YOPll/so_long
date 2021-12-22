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
#include "./utils/libft.h"
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

    char    *t_path;
    char    *t_wall;
    char    *t_ply;
    char    *t_col;
    char    *t_exit;

    int     img_width;
    int     img_height;
    int     i;
    int     j;
}       t_so_long;

void    mapread(t_so_long *game, char *av[]);
int     count_maplines(char *av[]);
void    ft_exit(char *msg);
int     checkmapl(t_so_long *game);
int     checkmap_lf(t_so_long *game);
int     checkfullmap(t_so_long *game);
int     check_PCE(t_so_long *game);
void    checker(t_so_long *game);
int     checksquare(t_so_long *game);

#endif