/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 18:50:32 by exam              #+#    #+#             */
/*   Updated: 2018/11/02 19:32:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	make_all_lower(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = argv[i][j] - 'A' + 'a';
			j++;
		}
		i++;
	}
}

void	print_line(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	write(1, &str[i], 1);
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' ||
				str[i - 1] == '\t'))
			str[i] = str[i] - 'a' + 'A';
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		make_all_lower(argc, argv);
		while (i < argc)
		{
			print_line(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
