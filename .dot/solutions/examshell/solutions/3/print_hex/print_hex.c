/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:11:15 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/09 15:43:33 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		num;
	int		power16;
	int		total;
	int		i;

	power16 = 1;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd',
			'e', 'f'};
	num = 0;
	str = argv[1];
	i = 0;
	total = 0;

	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	while (num > 0)
	{
		power16 = 1;
		while (power16 * 16 <= num)
		{
			power16 *= 16;
		}
		total = 0;
		while ((total + 1) * power16 <= num)
		{
			total++;
		}
		write(1, &hex[total], 1);
		num -= (total * power16);
	}
	write(1, "\n", 1);
	return (0);
}
