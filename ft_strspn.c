/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:15:58 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/24 04:12:11 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
			if (accept[j] == '\0')
				return (k);
		}
		i++;
	}
	return (0);
}

#include <string.h>

int	main(void)
{
	char	s1[] = "Joao Cagao.";
	char	s2[] = "Jao C";

	printf("%ld\n", ft_strspn(s1, s2));
	printf("%ld\n", strspn(s1, s2));
	return (0);
}
