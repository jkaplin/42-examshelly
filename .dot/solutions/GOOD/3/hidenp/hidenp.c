/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:33:27 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 07:52:41 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;
	int		k;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		while (str2[i])
		{
			j = 0;
			k = i;
			while (str1[j] && str2[k])
			{
				if (str2[k] == str1[j])
					j++;
				k++;
			}
			if (str1[j] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
	return (0);
}
