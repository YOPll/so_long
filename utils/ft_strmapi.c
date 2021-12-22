/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:11:33 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/09 19:37:18 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = 0;
	while (i--)
		ptr[i] = f(i, s[i]);
	return (ptr);
}
