/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:39:45 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/07 18:34:24 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*save;

	i = 0;
	len = ft_strlen(s1);
	save = (char *)malloc(sizeof(char) * (len + 1));
	if (save == NULL)
		return (NULL);
	while (i < len)
	{
		save[i] = s1[i];
		i++;
	}
	save[i] = '\0';
	return (save);
}
