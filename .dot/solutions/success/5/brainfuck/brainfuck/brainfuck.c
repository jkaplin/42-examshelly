/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:27:40 by exam              #+#    #+#             */
/*   Updated: 2018/11/09 21:06:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *str, char *array)
{
	int		i_str;
	int		i_arr;
	int		count;

	i_str = 0;
	i_arr = 0;
	count = 0;
	while (str[i_str] != '\0')
	{
		if (str[i_str] == '>')
			i_arr++;
		if (str[i_str] == '<')
			i_arr--;
		if (str[i_str] == '+')
			array[i_arr] = array[i_arr] + 1;
		if (str[i_str] == '-')
			array[i_arr] = array[i_arr] - 1;
		if (str[i_str] == '[')
		{
			count = 1;
			if (array[i_arr] == 0)
			{
				while(str[i_str] != ']' || count != 0)
				{
					if (str[i_str + 1] == ']')
						count--;
					if (str[i_str + 1] == '[')
						count++;
					i_str++;
				}
			}
		}
		if (str[i_str] == ']')
		{
			count = 1;
			if (array[i_arr] != 0)
			{
				while(str[i_str] != '[' || count != 0)
				{
					if (str[i_str - 1] == '[')
						count--;
					if (str[i_str - 1] == ']')
						count++;
					i_str--;
				}
			}
		}
		if (str[i_str] == '.')
			write(1, &array[i_arr], 1);
		i_str++;
	}
}

int		main(int argc, char **argv)
{
	char	*array;
	int		i;

	array = (char *)malloc(2048);
	i = 0;
	while (i < 2048)
	{
		array[i] = 0;
		i++;
	}
	if (argc == 2)
		brainfuck(argv[1], array);
	free(array);
	return (0);
}
