/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:22:50 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 09:47:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	int		begin_word;
	int		begin_str;

	if (argc == 2)
	{
		str = argv[1];
		begin_word = 1;
		begin_str = 1;
		i = 0;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				begin_word = 1;
			}
			else if (!begin_str && begin_word == 1)
			{
				write(1, "   ", 3);
				write(1, &str[i], 1);
				begin_word = 0;
				begin_str = 0;
			}
			else
			{
				write(1, &str[i], 1);
				begin_word = 0;
				begin_str = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
