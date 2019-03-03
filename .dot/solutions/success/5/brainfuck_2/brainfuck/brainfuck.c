/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:14:23 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 14:22:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LENGTH 2048

int		main(int argc, char **argv)
{
	int		i;
	char	arr[LENGTH];
	int		count;
	char	*ptr;

	ptr = arr;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (i < LENGTH)
	{
		arr[i] = 0;
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '>')
			ptr++;
		if (argv[1][i] == '<')
			ptr--;
		if (argv[1][i] == '+')
			*ptr += 1;
		if (argv[1][i] == '-')
			*ptr -= 1;
		if (argv[1][i] == '.')
			write(1, ptr, 1);
		if (argv[1][i] == '[')
		{
			if (*ptr == 0)
			{
				count = 1;
				i++;
				while (count != 0)
				{
					if (argv[1][i] == '[')
						count++;
					if (argv[1][i + 1] == ']')
						count--;
					i++;
				}
			}
		}
		if (argv[1][i] == ']')
		{
			if (*ptr != 0)
			{
				count = 1;
				i--;
				while (count != 0)
				{
					if (argv[1][i] == ']')
						count++;
					if (argv[1][i - 1] == '[')
						count--;
					i--;
				}
			}
		}
		i++;
	}
	return (0);
}
