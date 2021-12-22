/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:04:48 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/09 12:04:28 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_de;
	size_t	l_sr;

	l_de = ft_strlen(dst);
	l_sr = ft_strlen(src);
	if (size == 0 || size - 1 < l_de)
		return (l_sr + size);
	i = l_de;
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (l_de + l_sr);
}
