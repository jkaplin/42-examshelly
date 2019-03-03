/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:07:32 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 17:47:23 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


#define ASCII_NUM 128

int		seen_before(int *seen_char, char find)
{
	int		i;

	i = 0;
	while (i < ASCII_NUM)
	{
		if (seen_char[i] == 1)
			return (1);
		i++;
	}
	seen_char[(int)find] = 1;
	return (0);
}

int		main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		seen_char[ASCII_NUM] = {0};

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		while (str1[i])
		{
			if (!seen_before(seen_char, str1[i]))
				write(1, &str1[i], 1);
			i++;
		}
		i = 0;
		while (str2[i])
		{
			if (!seen_before(seen_char, str2[i]))
				write(1, &str2[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* Solution #2

int		search_back_and_find(char *str, int i, char find)
{
	while (i >= 0)
	{
		if (str[i] == find)
			return (1);
		i--;
	}
	return (0);

}

int		main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		last_i;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		while (str1[i])
		{
			if (search_back_and_find(str1, i - 1, str1[i]) == 0)
				write(1, &str1[i], 1);
			i++;
		}
		last_i = i;
		i = 0;
		while (str2[i])
		{
			if (search_back_and_find(str2, i - 1, str2[i]) == 0 && search_back_and_find(str1, last_i - 1, str2[i]) == 0)
				write(1, &str2[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

*/
