/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:38:38 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/12 18:54:31 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*save;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i - 1]))
		i--;
	save = ft_substr(s1, 0, i);
	return (save);
}
