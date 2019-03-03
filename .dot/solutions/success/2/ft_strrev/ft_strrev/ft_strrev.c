/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:30:51 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 16:34:48 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	swap;

	start = 0;
	end = 0;
	while (str[end])
		end++;
	end--;
	while (start < end)
	{
		swap = str[start];
		str[start] = str[end];
		str[end] = swap;
		start++;
		end--;
	}
	return (str);
}
