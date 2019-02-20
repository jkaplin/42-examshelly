/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:43:20 by exam              #+#    #+#             */
/*   Updated: 2018/10/26 18:53:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char lower;
	char upper;

	lower = 'z';
	upper = 'Y';
	while (upper >= 'A')
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower - 2;
		upper = upper - 2;
	}
	write(1, "\n", 1);
	return (0);
}
