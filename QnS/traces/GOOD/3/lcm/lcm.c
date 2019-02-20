/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:29:44 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/19 15:42:42 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	if (a == 0 || b == 0)
		return (0);
	i = 1;
	while (a % i != 0 || b % i != 0)
	{
		if (i > a && i > b)
			return (0);
		i++;
	}
	return (i);
}
