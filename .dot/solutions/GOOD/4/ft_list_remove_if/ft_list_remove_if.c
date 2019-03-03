/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 08:18:11 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/26 08:33:54 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*link;
	t_list	*tmp;

	link = *begin_list;
	while (link && cmp(link->data, data_ref) == 0)
	{
		tmp = link;
		link = link->next;
		free(tmp);
	}
	while (link)
	{
		if (cmp(link->data, data_ref) == 0)
		{
			tmp = link;
			link = link->next;
			free(tmp);
		}
		else
			link = link->next;
	}
}
