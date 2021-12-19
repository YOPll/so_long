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
#include "./Libft/libft.h"
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_so_long
{
    void    *mlx;
    void    *window;
    void    *path;
    void    *player;
    void    *collect;
    void    *exitus;

    int     steps;

    int     img_width;
    int     img_height;
    int     i;
    int     j;
}       t_so_long;


#endif