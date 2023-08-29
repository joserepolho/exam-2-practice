/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:12:48 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/24 00:31:47 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	j = 0;
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return ((char *) s1);
			j++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "Joao Cagao.";
	char	*s2 = "ao";

	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s\n", strpbrk(s1, s2));
	return (0);
}
