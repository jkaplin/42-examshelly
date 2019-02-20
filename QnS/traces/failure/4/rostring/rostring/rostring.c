/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 19:34:51 by exam              #+#    #+#             */
/*   Updated: 2018/11/02 21:11:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	first(char *str, char **copy)
{
	int		i;
	int		length;
	int		point;

	i = 0;
	length = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	point = i;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			break ;
		length++;
	}
	*copy = (char *)malloc(sizeof(char) * (length + a));
	jk_strcp(&str[point], copy, length);
	i = 0;
	while (i < length)
	{
		free(str[point]);
		point++;
		i++;
	}
}

char	*last(char *str)
{
	int		i;
	int		length;
	char	*point;

	i = 0;
	length = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	point = &str[i];
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' || str[i] != '\t') && (str[i-1] == ' ' ||
					str[i - 1] == '\t'))
			point = &str[i];
		i++;
	}
	return (point);
}

void	jk_strncp(char *src, char *dest, int n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	print_arg(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n')
				write(1, " ", 1);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*copy;
	i = 1;
	if (argc > 1)
	{
		first(argc[2], &copy);
		argv[1] = (char *)malloc(sizeof(char)
				* (len_first(point_last(argv[argc - 1]), &argc) + 1));
		jk_strcp(argv[argc - 1], argv[1]);
		free(point_last(argv[argc - 1]));
		argv[argc - 1] = (char *)malloc(sizeof(char) *
				(len_first(copy, &argc) + 1));
		jk_strcp(copy, argv[argc - 1]);
		while (i < argc)
		{
			print_arg(argv[i]);
			if (i < argc - 1)
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
