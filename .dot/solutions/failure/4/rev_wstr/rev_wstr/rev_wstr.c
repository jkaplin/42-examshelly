/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 21:14:04 by exam              #+#    #+#             */
/*   Updated: 2018/11/02 21:59:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		wordlen(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if(str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' ||
					str[i + 1] == '\t' || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

void	print(char *str, int total_words)
{
	int		word;
	int		i;

	while (total_words > 0)
	{
		word = 0;
		i = 0;
		while (str[i] != '\0')
		{
			if (word == total_words - 1)
				if(str[i] == '\t')
					str[i] = ' ';
				write(1, &str[i], 1);
			if(str[i] == ' ' || str[i] == '\t')
				word++;
			i++;
		}
		write(1, " ", 1);
		total_words--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print(argv[1], wordlen(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
