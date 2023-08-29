/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:41:30 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/24 23:04:26 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n > i)
		i *= 2;
	return ((n == i) ? 1 : 0);
}

#include <stdio.h>

int	main(void)
{
	int	re;
	int	n;

	n = 12;
	re = is_power_of_2(n);
	if (re == 1)
		printf("%i is power of 2.\n", n);
	if (re == 0)
		printf("%i is not power of 2.\n", n);
	return (0);
}
