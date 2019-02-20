/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:24:08 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 12:36:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = 'a' + (argv[i][j] - 'A');
			j++;
		}
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j == 0 && argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = 'A' + (argv[i][j] - 'a');
			else if ((argv[i][j - 1] == ' ' || argv[i][j-1] == '\t') && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
				argv[i][j] = 'A' + (argv[i][j] - 'a');
			j++;
		}
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
