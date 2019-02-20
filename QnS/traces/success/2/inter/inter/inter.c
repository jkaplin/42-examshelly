/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:14:17 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 09:28:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	c;
	int		print;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					c = argv[2][j];
					k = i - 1;
					print = 1;
					while (k >= 0)
					{
						if (argv[1][k] == c)
						{
							print = 0;
							break;
						}
						k--;
					}
					if (print == 1)
					{
						write(1, &c, 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
