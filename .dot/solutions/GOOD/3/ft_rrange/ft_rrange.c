/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:27:16 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 07:32:12 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*array;
	int		size;
	int		factor;
	int		i;

	size = end - start;
	if (size < 0)
	{
		factor = 1;
		size *= -1;
	}
	else
		factor = -1;
	size++;
	array = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		array[i] = end;
		end += factor;
		i++;
	}
	return (array);
}
