/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 08:39:52 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/10 08:56:58 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_foreach.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*node;

	node = begin_list;
	while (node->next != 0)
	{
		(*f)(node->data);
		node = node->next;
	}
}

int		main(void)
{
	TEST!!!
}
