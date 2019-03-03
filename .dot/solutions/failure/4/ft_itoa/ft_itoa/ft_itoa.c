/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:31:41 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 11:25:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*str;
	int		digits;
	int		nbr_cpy;

	if (nbr == 0)
	{
		str = (char *) malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		digits = 0;
		if (nbr < 0)
		{
			digits++;
			nbr *= -1;
		}
		nbr_cpy = nbr;
		while (nbr_cpy != 0)
		{
			nbr_cpy /= 10;
			digits++;
		}
		str = (char *) malloc(sizeof(char) * (digits + 1));
		str[digits] = '\0';
		digits--;
		while (nbr != 0)
		{
			str[digits] = '0' + nbr % 10;
			nbr /= 10;
			digits--;
		}
		if (digits == 0)
			str[0] = '-';
	}
	return (str);
}
