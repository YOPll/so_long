/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:47:31 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/11/14 21:58:24 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*b;

	if (!*lst)
		*lst = new;
	else
	{
		b = *lst;
		while (b->next)
			b = b->next;
		b->next = new;
	}
}
