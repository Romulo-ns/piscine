/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:06:55 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/15 12:59:52 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Aqui é pedido um programa, pelo que deve incluir uma função 
// main no seu ficheiro.c.
// • Escreva um programa que mostre o seu próprio nome, seguido de uma quebra
// de linha.
// • Exemplo :
// $>./a.out | cat -e
// ./a.out$
// $>

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
