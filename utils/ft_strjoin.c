/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <zyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:29 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/12/19 19:19:25 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = malloc(l1 + l2 + 1);
	if (!str)
		return (NULL);
	ft_memmove(str, s1, l1);
	ft_memmove(str + l1, s2, l2);
	str[l1 + l2] = 0;
	free((char *)s1);
	return (str);
}
