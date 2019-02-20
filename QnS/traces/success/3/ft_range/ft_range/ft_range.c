/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:31:40 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 09:56:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		factor;
	int		*array;
	int		diff;
	int		i;

	diff = start - end;
	if (diff < 0)
	{
		diff *= -1;
		factor = 1;
	}
	else
	{
		factor = -1;
	}
	array = (int *)malloc(sizeof(int) * (diff + 1));
	i = 0;
	while (i <= diff)
	{
		array[i] = start;
		start += factor;
		i++;
	}
	return (array);
}
