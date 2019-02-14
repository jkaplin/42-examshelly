/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:58:36 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/09 14:15:29 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		start;
	int		end;
	char	copy;

	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][end] != '\0')
		{
			end++;
		}
		end--;
		while (start < end)
		{
			copy = argv[1][start];
			argv[1][start] = argv[1][end];
			argv[1][end] = copy;
			start++;
			end--;
		}
		start = 0;
		while (argv[1][start] != '\0')
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
