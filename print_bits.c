/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:45:12 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/26 02:07:52 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	unsigned char	bits;

	i = 8;
	while (i--)
	{
		bits = (octet >> i) + '0';
		write(1, &bits, 1);
	}
}

int	main(void)
{
	print_bits('m');
}
