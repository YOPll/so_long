/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:08:38 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/01 18:13:40 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_refresh(int i, int j, t_so_long *game)
{
    ft_map_update(i, j, game);
    ft_syncmap(i, j, game);
}