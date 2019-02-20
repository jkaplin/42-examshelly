/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:37:46 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 11:57:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swapped;
	int		copy;
	t_list	*node;

	swapped = 1;
	while (swapped)
	{
		node = lst;
		swapped = 0;
		while (node->next)
		{
			copy = node->data;
			if (cmp(node->data, node->next->data) == 0)
			{
				swapped = 1;
				node->data = node->next->data;
				node->next->data = copy;
			}
			node = node->next;
		}
	}
	return (lst);
}
