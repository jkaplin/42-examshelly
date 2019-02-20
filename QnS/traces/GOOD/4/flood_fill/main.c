/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:36:28 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/18 19:45:11 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BEGIN_X 1
#define BEGIN_Y 1

#include "flood_fill.h"
#include <unistd.h>
#include <stdlib.h>

void  flood_fill(char **tab, t_point size, t_point begin);

char	**make_area(char *zone[], t_point size)
{
	char 	**area;
	int		i;
	int		j;

	area = (char **)malloc(sizeof(char *) * size.x);
	i = 0;
	while (i < size.x)
	{
		area[i] = (char *)malloc(sizeof(char) * size.y);
		i++;
	}
	i = 0;
	while (i < size.x)
	{
		j = 0;
		while (j < size.y)
		{
			area[i][j] = zone[j][i];
			j++;
		}
		i++;
	}
	return (area);
}

void	print_tab(char **area, t_point size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size.y)
	{
		j = 0;
		while (j < size.x)
		{
			write(1, &area[j][i], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(void)
{
	char **area;
	t_point size = {8, 5};
	t_point begin = {BEGIN_X, BEGIN_Y};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	area = make_area(zone, size);
	print_tab(area, size);
	flood_fill(area, size, begin);
	write(1, "\n", 1);
	print_tab(area, size);
	return (0);
}
