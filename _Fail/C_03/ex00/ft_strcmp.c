/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:57:12 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/05 16:01:00 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduzir de forma idêntica o funcionamento da função strcmp (man strcmp).

// comparar a diferenca de char na tabela ascii s1 e s2 e retorna a difereca
// entre os dois na tabela ascii

// se for igual 0
// se s1 > s2 = positivo,
// ex: s1['a'] x s2['z'] que é a mesma coisa que s1[97] x s2[122], R: 25
// se s1 < s2 = negativo,
// ex: s1['z'] x s2['a'] que é a mesma coisa que s1[122] x s2[97], R: -25

// As duas strings são iguais até os primeiros n caracteres?

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("abc", "abs"));
// 	return (0);
// }
