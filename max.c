/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:03:13 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/25 01:37:50 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = 1;
	if (len == 0)
		return (0);
	while (tab[i])
	{
		while (tab[i] >= tab[j] && tab[j])
			j++;
		if (tab[j] && tab[j] > tab[i])
			h = tab[j];
		i++;
	}
	return (h);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {2, 300, 76, 83, 52, 70, 7, 0, 1};
	int	len = 7;
	printf("%i\n", max(tab, len));
	return (0);
}
