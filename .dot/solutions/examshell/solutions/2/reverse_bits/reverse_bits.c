/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:20:50 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 22:17:38 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		power2;
	int		count;
	char	c;
	char	r;
	int		r_power2;

	r = 0;
	count = 1;
	if (argc == 2)
	{
		c = argv[1][0];
		power2 = 128;
		r_power2 = 1;
		while (count <= 8)
		{
			if (c >= power2)
			{
				r += r_power2;
				c -= power2;
			}
			power2 /= 2;
			r_power2 *= 2;
			count++;
		}
	}
	write(1, &r, 1);
	write(1, "\n", 1);
	return (0);
}

