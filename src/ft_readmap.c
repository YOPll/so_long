/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 01:59:44 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/03 19:09:10 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_maplines(char **av)
{
	int		fd;
	int		l_nbr;
	char	*str;

	fd = open(av[1], O_RDONLY);
	l_nbr = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (str == NULL)
			break ;
		free(str);
		l_nbr++;
	}
	close(fd);
	return (l_nbr);
}

int	mapread(t_so_long *game, char *av[])
{
	int		fd;
	int		l_nbr;
	char	*str;

	l_nbr = count_maplines(av);
	if (!l_nbr)
		return (l_nbr);
	fd = open(av[1], O_RDONLY);
	game->map.map = (char **)malloc(l_nbr * sizeof(char *));
	l_nbr = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (str == NULL)
			break ;
		game->map.map[l_nbr] = str;
		l_nbr++;
	}
	close(fd);
	game->img_height = l_nbr;
	game->img_width = ft_strlen(game->map.map[0]);
	return (l_nbr);
}

int	checksquare(t_so_long *game)
{
	int		i;
	size_t	w_len;

	i = 1;
	w_len = ft_strlen(game->map.map[0]);
	while (i < game->img_height)
	{
		if (ft_strlen(game->map.map[i]) != w_len)
			return (-1);
		i++;
	}
	return (0);
}
