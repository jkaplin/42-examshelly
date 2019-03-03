/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:34:43 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 09:45:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		num1;
	int		num2;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d", num1 + num2);
		else if (argv[2][0] == '-')
			printf("%d", num1 - num2);
		else if (argv[2][0] == '*')
			printf("%d", num1 * num2);
		else if (argv[2][0] == '/')
		{
			if (num2 == 0)
				return (-1);
			printf("%d", num1 / num2);
		}
		else if (argv[2][0] == '%')
		{
			if (num2 == 0)
				return (-1);
			printf("%d", num1 % num2);
		}
	}
	printf("\n");
	return (0);
}
