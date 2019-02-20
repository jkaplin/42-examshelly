/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 06:55:31 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 07:01:43 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*node;

	node = begin_list;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
