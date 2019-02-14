/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:27:40 by jkaplin           #+#    #+#             */
/*   Updated: 2018/10/30 15:57:27 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				while (j++ <= (argv[1][i] - 'a'))
					write(1, &(argv[1][i]), 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				while (j++ <= (argv[1][i] - 'A'))
					write(1, &(argv[1][i]), 1);
			else
				write(1, &(argv[1][i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
