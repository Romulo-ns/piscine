/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:49:15 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 12:33:26 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduzir de forma idêntica o funcionamento da função strncmp (man).

// Essas duas strings são iguais até onde eu estou autorizado a olhar?

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned int) s1[i] - (unsigned int) s2[i]);
	return (0);
}

// int main()
// {
// 	char *s1;
// 	char	*s2;

// 	s1 = "abc";
// 	s2 = "abc3";
// 	printf("%d", ft_strncmp(s1, s2, 4));
// 	return (0);
// }
