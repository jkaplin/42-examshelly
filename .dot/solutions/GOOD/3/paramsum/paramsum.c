/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:00:15 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 08:08:09 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 10)
	{
		ft_putchar('0' + num);
		return ;
	}
	ft_putnbr(num / 10);
	ft_putchar('0' + (num % 10));
}

int		main(int argc, char **argv)
{
	char	**cpy;

	cpy = argv;
	ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
