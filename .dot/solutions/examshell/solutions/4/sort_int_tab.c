/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 20:25:44 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 20:44:50 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *tab, int i)
{
	int		copy;

	copy = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = copy;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int		i;
	int		swapped;

	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(tab, i);
				swapped = 1;
			}
			i++;
		}
	}
}
