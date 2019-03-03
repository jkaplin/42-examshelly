/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 08:12:35 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/18 17:01:06 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	long	sum;
	int		sign;
	int		i;

	sum = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * sum);
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

void	print_hex_rec(int num, char *chars)
{
	if (num < 16)
	{
		write(1, &chars[num % 16], 1);
		return ;
	}
	print_hex_rec(num / 16, chars);
	write(1, &chars[num % 16], 1);
}

void	print_hex_iter(int num, char *chars)
{
	int		copy;
	int		digits;
	int		power16;
	int		i;

	copy = num;
	digits = 0;
	while (copy > 0)
	{
		digits++;
		copy /= 16;
	}
	power16 = 1;
	i = 1;
	while (i < digits)
	{
		power16 *= 16;
		i++;
	}
	while (power16 > 0)
	{
		i = 0;
		while (i < 16)
		{
			if (power16 * (i + 1) > num)
				break;
			i++;
		}
		write(1, &chars[i], 1);
		num -= (i * power16);
		power16 /= 16;
	}
}

int		main(int argc, char **argv)
{
	char	chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	
	if (argc == 2)
	{
		print_hex_rec(ft_atoi(argv[1]), chars);
	}
	write(1, "\n", 1);
	return (0);
}
