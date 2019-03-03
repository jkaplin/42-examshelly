/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:08:02 by exam              #+#    #+#             */
/*   Updated: 2018/11/09 18:17:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		count;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = 0;
				while (count <= (argv[1][i] - 'a'))
				{
					write(1, &argv[1][i], 1);
					count++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{	
				count = 0;
				while (count <= (argv[1][i] - 'A'))
				{
					write(1, &argv[1][i], 1);
					count++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
