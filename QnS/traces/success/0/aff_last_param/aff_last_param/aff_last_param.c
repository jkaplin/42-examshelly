/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:08:57 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/17 08:46:09 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		length;

	if (argc > 1)
	{
		str = argv[argc - 1];
		length = 0;
		while (str[length])
			length++;
		write(1, str, length);
	}
	write(1, "\n", 1);
	return (0);
}
