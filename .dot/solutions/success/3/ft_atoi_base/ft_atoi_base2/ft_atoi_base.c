/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:24:43 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 09:43:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(const char *str, int str_base)
{
	long	sum;
	long	sign;
	long	num;
	long	i;

	sum = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '+')
			i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = str[i] - '0';
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			num = 10 + (str[i] - 'a');
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			num = 10 + (str[i] - 'A');
		}
		else
			return ((int)(sum * sign));
		if (num >= str_base)
			return ((int)(sum * sign));
		sum = sum * str_base + (num % str_base);
		i++;
	}
	return ((int)(sum * sign));
}
