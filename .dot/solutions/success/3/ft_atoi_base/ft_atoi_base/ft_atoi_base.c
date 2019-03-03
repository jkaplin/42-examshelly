/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:52:02 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 10:26:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(const char *str, int str_base)
{
	int		digit;
	int		i;
	long	sum;
	int		sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
		i++;
	sum = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = 10 + str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = 10 + str[i] - 'A';
		else
			break;
		if (digit >= str_base)
			break;
		sum = sum * str_base + digit;
		i++;
	}
	sum *= sign;
	return ((int)sum);
}
