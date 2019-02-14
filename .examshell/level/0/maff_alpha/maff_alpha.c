/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:16:20 by jkaplin           #+#    #+#             */
/*   Updated: 2018/10/30 08:22:05 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	lowercase;
	char	uppercase;

	lowercase = 'a';
	uppercase = 'B';
	while (uppercase <= 'Z')
	{
		write(1, &lowercase, 1);
		write(1, &uppercase, 1);
		lowercase += 2;
		uppercase += 2;
	}
	write(1, "\n", 1);
	return (0);
}
