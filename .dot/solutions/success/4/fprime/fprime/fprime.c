/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:54:01 by exam              #+#    #+#             */
/*   Updated: 2018/11/09 19:23:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_prime(int n)
{
	int		i;

	if (n <= 0)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		n;
	int		p;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (is_prime(n) == 1)
		{
			printf("%d\n", n);
			return (0);
		}
		while (n > 1)
		{
			p = 2;
			while (n % p != 0)
			{
				p++;
				while (!is_prime(p))
					p++;
			}
			printf("%d", p);
			n /= p;
			if (n != 1)
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
