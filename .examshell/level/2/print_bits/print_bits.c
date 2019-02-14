/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:20:50 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 21:57:55 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		power2;
	int		count;
	char	c;

	count = 1;
	if (argc == 2)
	{
		c = argv[1][0];
		power2 = 128;
		while (count <= 8)
		{
			if (c >= power2)
			{
				write(1, "1", 1);
				c -= power2;
			}
			else
				write(1, "0", 1);
			power2 /= 2;
			count++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

