/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:55:13 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 20:43:22 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	long	num;
	int		sign;

	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = num * str_base + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			num = num * str_base + 10 + (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'F')
			num = num * str_base + 10 + (str[i] - 'A');
		i++;
	}
	num *= sign;
	return ((int)num);
}
