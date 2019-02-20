/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:22:48 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 18:32:59 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		j = 0;
		while (str1[i])
		{
			while (str2[j])
			{
				if (str1[i] == str2[j])
				{
					j++;
					break ;
				}
				j++;
			}
			if (str2[j] == '\0')
				break ;
			i++;
		}
		if (str1[i] == '\0')
			write(1, str, i);
	}
	write(1, "\n", 1);
}
