/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:17:59 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/11 18:07:49 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*save;

	save = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (save[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
