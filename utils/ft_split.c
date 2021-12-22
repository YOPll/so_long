/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:42:48 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/13 01:05:43 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

static int	ft_words(char const *s, char c)
{
	unsigned int	i;
	int				size;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			size++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (size);
}

static char	**fill(char **strs, char const *str, char c)
{
	int	in;
	int	i;
	int	tmp_int;

	in = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		tmp_int = i;
		while (str[i] != c && str[i])
			i++;
		strs[in] = malloc(i - tmp_int + 1);
		if (!strs[in])
			return (NULL);
		ft_strlcpy(strs[in++], str + tmp_int, i - tmp_int + 1);
	}
	strs[in] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	if (!s)
		return (NULL);
	i = ft_words(s, c);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	if (!fill(strs, s, c))
	{
		clear(strs);
		return (NULL);
	}
	return (strs);
}
