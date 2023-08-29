/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:10:54 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/23 05:39:33 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*s;

	s = malloc(ft_strlen(src) + 1);
	if (s)
	{
		while (src[i])
		{
			s[i] = src[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s = "Joao Cagao.";

	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return (0);
}
