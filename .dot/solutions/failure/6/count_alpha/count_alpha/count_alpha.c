/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:25:01 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 15:16:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ALPHABET 26

typedef struct	s_count_char
{
	char	c;
	int		index;
	int		count;
}				t_count_char;

void	assign_index(int *index, char c, t_count_char *alpha)
{
	int		i;

	i = 0;
	while (alpha[i].c != '\0')
	{
		if (c == alpha[i].c)
			break;
		i++;
	}
	*index = i;
}

int		main(int argc, char **argv)
{
	t_count_char	alpha[ALPHABET];
	int				i;
	int				printed;
	int				index;

	if (argc == 2)
	{
		i = 0;
		while (i < ALPHABET)
		{
			alpha[i].c = '\0';
			alpha[i].count = 0;
			i++;
		}
		index = 0;
		i = 0;
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				assign_index(&index, argv[1][i], alpha);
				alpha[index].c = argv[1][i];
				alpha[index].count += 1;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				assign_index(&index, 'a' + (argv[1][i] - 'A'), alpha);
				alpha[index].c = 'a' + (argv[1][i] - 'A');
				alpha[index].count += 1;
			}
			i++;
		}
		printed = 0;
		i = 0;
		while (alpha[i].c != '\0')
		{
				if (printed)
					printf(", ");
				printed = 1;
				printf("%d%c", alpha[i].count, alpha[i].c);
			i++;
		}
	}
	printf("\n");
}
