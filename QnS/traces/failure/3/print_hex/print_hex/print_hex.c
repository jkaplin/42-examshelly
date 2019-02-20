/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:26:05 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 12:21:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		num;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void	ft_put_digit(int digit)
{
	char c;

	if (digit < 10)
		c = '0' + digit;
	else
		c = 'a' + digit - 10;
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		power;
	int		power16;
	int		digit;
	int		num;
	int		num_copy;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num == 0)
		{
			write (1, "0\n", 2);
			return (0);
		}
		num_copy = num;
		power = 0;
		while (num_copy > 0)
		{
			power++;
			num_copy /= 16;
		}
		power16 = 1;
		while (power > 1)
		{
			power16 *= 16;
			power--;
		}
		while (num > 0)
		{
			digit = 0;
			while (num >= (power16 * digit))
			{
				digit++;
			}
			digit--;
			ft_put_digit(digit);
			num -= power16 * digit;
			while (num == 0 && power16 > 1)
			{
				write(1, "0", 1);
				power16 /= 16;
			}
			power16 /= 16;
		}
	}
	write (1, "\n", 1);
	return (0);
}
