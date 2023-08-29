/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 05:56:04 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/27 15:16:29 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// swap_bits for masochists 

unsigned char	swap_bits(unsigned char octet)
{
	int		i;
	unsigned char	tr;
	unsigned char	res;

	i = 4;
	res = 0;
	while (i--)
	{
		tr = tr * 2 + (octet % 2);
		res = res * 2 + (tr % 2);
		octet = octet / 2;
	}
	i = 8;
	while (i-- > 4)
	{
		tr = tr * 2 + (octet % 2);
		res = res * 2 + (tr % 2);
		octet = octet / 2;
	}
	return (res);
}

