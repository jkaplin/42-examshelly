/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 22:03:10 by jkaplin           #+#    #+#             */
/*   Updated: 2018/11/15 22:18:48 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	octet = octet >> 4 | octet << 4;                   //  ==  octet = (octet & 0xF0) >> 4 | (octet & 0x0F) << 4;
	octet = (octet & 0xCC) >> 2 | (octet & 0x33) << 2;
	octet = (octet & 0xAA) >> 1 | (octet & 0x55) << 1;
	return (octet);
}
