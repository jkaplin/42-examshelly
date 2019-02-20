/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:45:51 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/18 19:55:19 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill_recursive(char **tab, t_point size, char fill, int x, int y)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[x][y] != fill)
		return ;
	else
		tab[x][y] = 'F';
	fill_recursive(tab, size, fill, x + 1, y);
	fill_recursive(tab, size, fill, x - 1, y);
	fill_recursive(tab, size, fill, x, y + 1);
	fill_recursive(tab, size, fill, x, y - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill_recursive(tab, size, tab[begin.x][begin.y], begin.x, begin.y);
}
