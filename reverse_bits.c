/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:50:04 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/26 05:41:10 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	unsigned char	m = 'm';
	unsigned char	r = reverse_bits(m);
	int	i;

	i = 8;
	printf("\nReversed: 0b");
	while (i--)
		printf("%d", (r >> i) & 1);
	printf("\n");
	return (0);
}

