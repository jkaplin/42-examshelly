/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:48:50 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 17:57:05 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	octet = octet >> 4 | octet << 4;
	octet = (octet & 0xCC) >> 2 | (octet & 0x33) << 2;
	octet = (octet & 0xAA) >> 1 | (octet & 0x55) << 1;
	return (octet);
}
