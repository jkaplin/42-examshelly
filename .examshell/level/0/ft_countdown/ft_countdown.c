/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:01:59 by jkaplin           #+#    #+#             */
/*   Updated: 2018/10/30 08:06:42 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	digit;

	digit = '9';
	while (digit >= '0')
	{
		write(1, &digit, 1);
		digit--;
	}
	write(1, "\n", 1);
	return (0);
}