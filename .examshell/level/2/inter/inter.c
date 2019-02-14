/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:29:03 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/09 13:52:44 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_seen_before_s1(char c, int last, char *s1, char *s2)
{
	int		i;

	i = 0;
	while (i < last)
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		not_seen_befor_s2(char c, int last, char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	i = 0;
	while (i < last)
	{
		if (s2[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		in_both(char c, s1, s2)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i++] == c)
		{
			count++;
			break ;
		}
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
		{
			count++;
			break ;
		}
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}
void	inter(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (not_seen__before_s1(s1[i], i, s1, s2) && in_both(s1[i], s1, s2))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (not_seen__before_s2(s2[i], i, s1, s2) && in_both(s2[i], s1, s2))
			write(1, &s2[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
