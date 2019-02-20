/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:05:18 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 07:24:23 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			str = argv[j];
			i = 0;
			while (str[i])
			{
				if (is_letter(str[i]) == 2)
						str[i] = 'a' + (str[i] - 'A');
				if (is_letter(str[i]) == 1 && !is_letter(str[i+1]))
						str[i] = 'A' + (str[i] - 'a');
				write(1, &str[i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
