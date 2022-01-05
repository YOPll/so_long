/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collected.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:45:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/05 19:37:54 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_collcheck(t_so_long *game)
{
	if (game->collected == 0)
	{
		printf(" _   _    __        __   ___    _   _ \n");
		printf("| | | |   \\ \\      / /  / _ \\  | \\ | |\n");
		printf("| | | |    \\ \\ /\\ / /  | | | | |  \\| |\n");
		printf("| |_| |     \\ V  V /   | |_| | | |\\  |\n");
		printf(" \\___/       \\_/\\_/     \\___/  |_| \\_|\n");
		free(game->map.map);
		ft_exit();
	}
}
