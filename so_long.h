/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:23:03 by zyacoubi          #+#    #+#             */
/*   Updated: 2022/01/01 02:59:35 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx/mlx.h"
# include "./utils/libft.h"
# include <errno.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_map
{
	char	**map;
}	t_map;

typedef struct s_player
{
	int		h;
	int		v;
	t_map	map;
}	t_player;

typedef struct s_so_long
{
	t_map		map;
	t_player	myplayer;

	void		*mlx;
	void		*window;
	void		*path;
	void		*wall;
	void		*player;
	void		*collect;
	void		*exitus;
	void		*stepsus;
	void		*collecus;
	void		*trap;
	int			collected;
	int			coll_sum;
	int			c_count;
	int			p_count;
	int			e_count;
	int			steps;
	char		*t_path;
	char		*t_wall;
	char		*t_ply;
	char		*t_col;
	char		*t_exit;
	char		*t_steps;
	char		*t_collect;
	char		*t_trap;

	int			img_width;
	int			img_height;
	int			i;
	int			j;
	int			z;
}	t_so_long;

int	mapread(t_so_long *game, char *av[]);
int		count_maplines(char *av[]);
int		ft_exit(void);
int		checkmapl(t_so_long *game);
int		checkmap_lf(t_so_long *game);
int		checkfullmap(t_so_long *game);
int		check_PCE(t_so_long *game);
void	checker(t_so_long *game);
int		checksquare(t_so_long *game);
void	ft_img(t_so_long *game);
void	ft_map(t_so_long *game);
int		ft_mapt(t_so_long *game);
void	ft_mapwall(int i, int j, t_so_long *game);
void	ft_map_pla(int i, int j, t_so_long *game);
void	ft_mapcoll(int i, int j, t_so_long *game);
void	ft_mapexit(int i, int j, t_so_long *game);
void	ft_map_path(int i, int j, t_so_long *game);
void    ft_playerpos(int i, int j, t_so_long *game);
void    ft_collpos(int  i, int  j, t_so_long *game);
int		ft_move(int keycode, t_so_long *game);
void	ft_collcheck(t_so_long *game);
int		ft_map_update(int x, int y, t_so_long *game);
void	ft_syncmap(int x, int y, t_so_long *game);
void    ft_count(t_so_long *game);

#endif
