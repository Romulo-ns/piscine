/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:10:54 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/15 12:57:20 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Aqui é pedido um programa, pelo que deve incluir uma função main
// no seu ficheiro.c.
// • Escreva um programa que mostre os argumentos recebidos na linha de comando.
// • Um por linha na ordem inversa da linha de comando.
// • Deve mostrar todos os argumentos, excepto o argv[0].

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i_arg;
	int	i_str;

	i_arg = argc -1;
	while (argv[i_arg] && i_arg > 0)
	{
		i_str = 0;
		while (argv[i_arg][i_str])
		{
			write(1, &argv[i_arg][i_str], 1);
			i_str++;
		}
		write(1, "\n", 1);
		i_arg--;
	}
	return (0);
}
