/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:57:23 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 15:25:15 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LENGTH (8 * 4 + 3)

int		valid(char *str)
{
	int		i;
	int		h;
	int		letter;

	letter = 0;
	h = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if (str[i] == '-')
		{
			i++;
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
			while (str[i] >= 'a' && str[i] <= 'z')
			{
				letter = 1;
				if (str[i] == 'h')
					h = 1;
				i++;
			}
		}
		else
			return (0);
	}
	if (letter == 0)
		return (0);
	if (h == 1)
		return (2);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	str[LENGTH];
	int 	k;

	if (argc == 1)
	{
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
		return (0);
	}
	k = 0;
	while (k < LENGTH)
	{
		if (k == 8 || k == 17 || k == 26)
			str[k] = ' ';
		else
			str[k] = '0';
		k++;
	}
	k = 0;
	i = 1;
	while (i < argc)
	{
		if (valid(argv[i]) == 0)
		{
			write(1, "Invalid Option\n", 15);
			return (0);
		}
		if (valid(argv[i]) == 2)
		{
			write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
			return (0);
		}
		j = 0;
		while (argv[i][j] != '\0')
		{
			while (argv[i][j] == ' ' || argv[i][j] == '-')
				j++;
			if (argv[i][j] != '\0')
				str[argv[i][j] - 'a' + ((argv[i][j] - 'a') / 8)] = '1';
			j++;
		}
		i++;
	}
	k = LENGTH - 1;
	while (k >= 0)
	{
		write(1, &str[k], 1);
		k--;
	}
}
