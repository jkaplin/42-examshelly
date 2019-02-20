/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:01:47 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 18:07:21 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	num = 0;
	while (str[i])
	{
		if (str[i] < 0 || str[i] > 9)
			return (sign * num);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}
