/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 01:18:49 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/29 02:09:51 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	patoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

void	print_numbers(int n)
{
	char	c;

	if (n >= 10)
		print_numbers(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	add_prime_sum(char *s)
{
	int	t;
	int	n;
	int	i;
	int	res;

	res = 0;
	t = patoi(s);
	n = 2;
	i = 0;
	while (i < (t - 1))
	{
		n = 2;
		while (n < t && ((t - i) % n))
		{
			n++;
			if (n == t)
				res = res + (t - i);
		}
		if (n == (t - i))
			n++;
		while (n < t && ((t - i) % n))
		{
			n++;
			if (n == t)
				res = res + (t - i);
		}
		i++;
	}
	print_numbers(res);
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != 45)
		add_prime_sum(av[1]);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
