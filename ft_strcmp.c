/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:00:41 by joaoribe          #+#    #+#             */
/*   Updated: 2023/08/23 02:23:55 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((unsigned char)*s1++ && (unsigned char)*s2++)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return (*s1 - *s2);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "Joao cagaa.";
	char	*s2 = "Joao cagab.";

	printf("%i\n", ft_strcmp(s1, s2));
	return (0);
}
