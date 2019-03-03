/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:51:08 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 10:08:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	num;
	long	sign;
	long	digits;
	long	copy;
	char	*str;

	if (nbr == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	digits = 0;
	num = (long)nbr;
	sign = 1;
	if (num < 0)
	{
		digits++;
		sign = -1;
		num *= -1;
	}

	copy = num;
	while (copy > 0)
	{
		digits++;
		copy /= 10;
	}

	str = (char *)malloc(sizeof(char) * (digits + 1));
	str[digits] = '\0';
	digits--;
	while (num > 0)
	{
		str[digits] = '0' + (num % 10);
		digits--;
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
