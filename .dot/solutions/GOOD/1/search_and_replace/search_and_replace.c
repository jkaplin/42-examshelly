/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:04:23 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 20:00:27 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	char	search;
	char	replace;
	int		i;

	if (argc == 4)
	{
		str = argv[1];
		search = argv[2][0];
		replace = argv[3][0];
		i = 0;
		while (str[i])
		{
			if (str[i] == search)
				str[i] = replace;
			i++;
		}
		write(1, str, i);
	}
	write(1, "\n", 1);
	return (0);
}
