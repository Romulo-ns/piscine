/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:23:04 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/18 22:29:50 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função ft_ultimate_range que aloque e atribua um array de int.
// Este array de int deverá conter todos os valores entre min e max.
// • Min incluído - max excluído.
// • O parâmetro range será devolvido (ou -1 se houver um problema).
// • Se o valor min for superior ou igual ao valor max, um pointer
// nulo será devolvido e deve retornar 0.

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int main(void)
// {
//     int *range;
//     int size;
//     int i;

//     size = ft_ultimate_range(&range, 1, 100);

//     if (size == -1)
//         return (1);

//     i = 0;
//     while (i < size)
//     {
//         printf("%d ", range[i]);
//         i++;
//     }

//     free(range);
//     return (0);
// }
