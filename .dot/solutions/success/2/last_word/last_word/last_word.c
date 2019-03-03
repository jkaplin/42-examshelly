/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:23:05 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 10:39:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		words;

	if (argc == 2)
	{
		words = 0;
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
				words = 1;
			i++;
		}
		if (words == 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (i != 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		if (i == 0)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		}
		else
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
