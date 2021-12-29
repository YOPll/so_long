/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:12:21 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/29 21:54:30 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char *av[])
{
    t_so_long   game;
    
    if (ac != 2)
        return(printf("Please insert Map"),0);
    if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4,".ber",4))
        return(perror("Error\nnot a '.ber' file."), 1);
    ft_memset(&game, 0, sizeof(t_so_long));
    mapread(&game, av); 
    checker(&game);
    game.mlx = mlx_init();
    game.window = mlx_new_window(game.mlx,(game.img_width * 100),(game.img_height * 100),"so_long");
    ft_img(&game);
    ft_map(&game);
    ft_mapt(&game);
    mlx_loop(game.mlx);
    //mlx_hook(game.mlx, 2, (1L << 0), ft_move, &game);
    //mlx_hook(game.mlx, 17, (1L << 17), ft_exit, &game);
    return (0);
}