/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:11:41 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/24 21:38:38 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		while (s2[j])
		{
			if (s1[i] == s2[j])
				s2[j] = 127;
			j++;
		}
		i++;
	}
}



int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
