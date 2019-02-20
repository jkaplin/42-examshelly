/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:30:02 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 11:42:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				swap;
	int				copy;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				copy = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = copy;
				swap = 1;
			}
			i++;
		}
	}
}
