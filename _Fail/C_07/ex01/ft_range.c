/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:21:43 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/18 22:30:30 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função ft_range que retorna um array de int. Este array de int
// deverá conter todos os valores entre min e max.
// • Min incluído - max excluído.
// • Se o valor min for superior ou igual ao valor max, um pointer
// nulo será devolvido.

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	int_array = (int *)malloc(sizeof(int) * size);
	if (!int_array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		int_array[i] = min + i;
		i++;
	}
	return (int_array);
}

// int main ()
// {
//     int     *range;
//     int     i;

//     range = ft_range(1, 100);
//     i = 0;
//     while (range[i] != '\0')
//     {
//         printf("%d, ", range[i]);
//         i++;
//     }
//     return (0);
// }
