/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 07:32:28 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/26 14:38:43 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		is_op(char c)
{
	if (c == '+' || c == '-' || c = '*' || c == '/' || c = '%')
		return (1);
	else
		return (0);
}

int		is_space(char c)
{
	if (c == ' ')
		return (1);
	else
		return (0);
}

is_valid (char *str)
{
	char	*c;
	int		num_c;
	int		op_c;
	int		i;

	num_c = 0;
	dig_c = 0;
	i = 0;
	while (str[i])
	{
		c = &str[i];
		if (!(is_digit(*c) || is_op(*c) || is_space(*c)))
			return (0);
		else if (is_op(*c))
		{
			op_c++;
			if (i == 0 || !is_space(*(c - 1)))
				return (0);
			if ((*c == '+' || *c == '-') && is_digit(*(c + 1)))
				op_c--;
			else if (!is_space(*(c + 1)))
				return (0);
		}
		else if (is_digit(*c))
		{
			if (is_digit(*c
			else if (i == 0 || (is_digit(*(c - 1))))
				num_c;
		}
		else if (is_space(*c) && num_c <= op_c)
			return (0);
	}
