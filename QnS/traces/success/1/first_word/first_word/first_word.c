/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:38:55 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 15:50:52 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
