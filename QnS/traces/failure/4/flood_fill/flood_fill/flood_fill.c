/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:00:59 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 11:09:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	recursive(char **tab, t_point size, char initial, int x, int y)
{
	tab[x][y] = 'F';
	if (x > 0 && tab[x - 1][y] == initial)
		recursive(tab, size, initial, x - 1, y);
	if (x < size.x && tab[x + 1][y] == initial)
		recursive(tab, size, initial, x + 1, y);
	if (y > 0 && tab[x][y - 1] == initial)
		recursive(tab, size, initial, x, y - 1);
	if (y < size.y && tab[x][y + 1] == initial)
		recursive(tab, size, initial, x, y + 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	int		x;
	int		y;
	char	initial;

	begin.x = begin.x - 1;
	begin.y = begin.y - 1;
	initial = tab[begin.x][begin.y];
	x = begin.x;
	y = begin.y;
	recursive(tab, size, initial, x, y);
}
