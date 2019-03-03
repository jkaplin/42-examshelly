/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:17:37 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 11:42:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_close(char *str, int i, char c)
{
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			i = ft_close(str, i + 1, str[i]);
			if (i == -1)
				return (-1);
		}
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (str[i] == ')')
			{
				if (c == '(')
					return (i + 1);
			}
			else if (str[i] == ']')
			{
				if (c == '[')
					return (i + 1);
			}
			else if (str[i] == '}')
			{
				if (c == '{')
					return (i + 1);
			}
			return (-1);
		}
		else
			i++;
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*str;
	int		opening[3];
	int		closing[3];

	j = 1;
	while (j < argc)
	{
		str = argv[j];
		opening[0] = 0;
		opening[1] = 0;
		opening[2] = 0;
		closing[0] = 0;
		closing[1] = 0;
		closing[2] = 0;
		i = 0;
		while (str[i])
		{
			if (str[i] == '(')
				opening[0]++;
			else if (str[i] == '[')
				opening[1]++;
			else if (str[i] == '{')
				opening[2]++;
			else if (str[i] == ')')
				closing[0]++;
			else if (str[i] == ']')
				closing[1]++;
			else if (str[i] == '}')
				closing[2]++;
			i++;
		}
		int		error;
		error = 0;
		if (!(opening[0] == closing[0] && opening[1] == closing[1] && opening[2] == closing[2]))
		{
			error = 1;
		}
		else
		{
			i = 0;
			while (str[i])
			{
				if (str[i] == '(')
				{
					i = ft_close(str, i + 1, '(');
					if (i == -1)
					{
						error = 1;
						break;
					}
				}
				else if (str[i] == '[')
				{
					i = ft_close(str, i + 1, '[');
					if (i == -1)
					{
						error = 1;
						break;
					}
				}
				else if (str[i] == '{')
				{
					i = ft_close(str, i + 1, '{');
					if (i == -1)
					{
						error = 1;
						break;
					}
				}
				else
					i++;
			}
		}
		if (error == 1)
			write(1, "Error\n", 6);
		else
			write(1, "OK\n", 3);
		j++;
	}
	if (argc < 2)
		write(1, "\n", 1);
	return (0);
}
