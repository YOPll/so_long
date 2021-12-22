/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:37:29 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/11 21:13:10 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	long	nb;

	nb = n;
	l = len(nb);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	str[l--] = 0;
	if (n == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[l--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}
