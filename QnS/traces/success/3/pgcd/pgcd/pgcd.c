/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:34:07 by exam              #+#    #+#             */
/*   Updated: 2018/11/09 18:49:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		gcd;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a < b)
			gcd = a;
		else
			gcd = b;
		while (gcd > 1)
		{
			if ((a % gcd == 0) && (b % gcd == 0))
				break ;
			gcd--;
		}
		printf("%d", gcd);
	}
	printf("\n");
	return (0);
}
