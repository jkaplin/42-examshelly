/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:02:43 by exam              #+#    #+#             */
/*   Updated: 2019/02/16 16:13:56 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}

/* Solution #2

int		main()
{
	char	odd;
	char	even;

	odd = 'a';
	even = 'B';
	while (even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		odd += 2;
		even += 2;
	}
	write(1, "\n", 1);
	return (0);
}

*/
