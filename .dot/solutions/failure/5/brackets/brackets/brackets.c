/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:48:48 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 12:56:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		sums(char *str)
{
	int		i;
	int		sums[3] = {0, 0, 0};

	i = 0;
	while (str[i])
	{
		if (str[i] == '(')
			sums[0]++;
		else if (str[i] == '[')
			sums[1]++;
		else if (str[i] == '{')
			sums[2]++;
		else if (str[i] == ')')
			sums[0]--;
		else if (str[i] == ']')
			sums[1]--;
		else if (str[i] == '}')
			sums[2]--;
		i++;
	}
	if (sums[0] == 0 && sums[1] == 0 && sums[2] == 0)
		return (1);
	return (0);
}

int		recursive(char *str)
{
	int		i;
	char	last;

	i = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			last = str[i];
			while(str[i])
			{
				if (str[i] == ')' || str[i] == ']' || str[i] == '}')
				{
					if (last == '(' && str[i] == ')')
						break;
					if (last == '[' && str[i] == ']')
						break;
					if (last == '{' && str[i] == '}')
						break;
					return (0);
				}
					i++;
			}
			if (str[i] == 0)
				break;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (sums(argv[i]) && recursive(argv[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
