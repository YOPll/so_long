/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:12:21 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/22 14:48:04 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char *av[])
{
    t_so_long   game;
    
    if (ac != 2)
        return(0);
    if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4,".ber",4))
        perror("Error\nnot a '.ber' file.");
    ft_bzero(&game,sizeof(t_so_long));
    mapread(&game, av);
    game.mlx = mlx_init();
    game.window = mlx_new_window(game.mlx,(game.img_width * 30),(game.img_height * 30),"so_long");
    return (0);
}