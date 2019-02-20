/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:44:07 by exam              #+#    #+#             */
/*   Updated: 2018/11/16 11:23:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	long	num;
	int		i;
	int		sign;

	num = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' && str_base > (str[i] - '0'))
			num = num * str_base + (str[i] - '0');
		else if(str[i] >= 'a' && str[i] <= 'f' && str_base > 10 + (str[i] - 'a'))
			num = num * str_base + 10 + (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'F' && str_base > 10 + (str[i] - 'A'))
			num = num * str_base + 10 + (str[i] - 'A');
		i++;
	}
	num = num * sign;
	return ((int)num);
}
