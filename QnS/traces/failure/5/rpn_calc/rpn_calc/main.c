/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:14:04 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 12:48:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int c, char **v)
{
	int		i;
	int		a;
	int		b;
	int		num_operand;
	int		num_operator;
	char 	c;
	char	last_c;
	char	last_o;

	char	*all;

	all = (char *)malloc(sizeof(v[1]));
	all = v[1];

	if (c != 2)
	{
		printf("Error\n");
	}
	else
	{
		i = 0;
		while (v[1][i])
		{
			last_o = ' ';
			c = v[1][i];
			if (c >= '0' && c <= '9')
			{
				if (last_o != ' ')
				{
					if (num_operand != num_operator - 1)
					{
						printf("Error\n");
						return (0);
					}
					num_operand = 0;
					num_operator = 0;
				}
				if (i == 0 || last_c == ' ')
					num_operand++;
			}
			else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
			{
				if (i == 0 || last_c == ' ')
					num_operator++;
				else
				{
					printf("Error\n");
					return (0);
				}
			}
			else if (c != ' ')
			{
				printf("Error\n");
				return (0);
			}
			last_c = c;
			i++;
		}
		i = 0;
		while (v[1][i])
		{
			c = v[1][i];
			if (c >= '0' && c <= '9')
			{
				if (i == 0 || last_c == ' ')
				{
					
				}
			}
			else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
			{

			}
			i++;
		}
	}
	return (0);
}
