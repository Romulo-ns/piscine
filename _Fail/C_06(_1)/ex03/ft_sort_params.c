/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:26:59 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/15 12:56:52 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Aqui é pedido um programa, pelo que deve incluir uma função
// main no seu ficheiro .c.
// • Escreva um programa que mostre os argumentos recebidos na linha
// de comando ordenados pelo seu valor ascii.
// • Deve mostrar todos os argumentos, excepto o argv[0].
// • Um argumento por linha.

#include <stdio.h>
#include <unistd.h>

int	str_comp(char *str_1, char *str_2)
{
	int	i;

	i = 0;
	while (str_1[i] != '\0')
	{
		if (str_1[i] != str_2[i])
			return (str_1[i] - str_2[i]);
		i++;
	}
	return (str_1[i] - str_2[i]);
}

void	bubble_sort(int size, char **arr)
{
	char	*temp;
	int		i;
	int		j;

	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1 - i)
		{
			if (str_comp(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	my_print(int argc, char **argv)
{
	int	i_arg;
	int	i_str;

	i_arg = 1;
	while (argv[i_arg])
	{
		i_str = 0;
		while (argv[i_arg][i_str])
		{
			write(1, &argv[i_arg][i_str], 1);
			i_str++;
		}
		write(1, "\n", 1);
		i_arg++;
	}
}

int	main(int argc, char **argv)
{
	bubble_sort(argc, argv);
	my_print(argc, argv);
	return (0);
}
