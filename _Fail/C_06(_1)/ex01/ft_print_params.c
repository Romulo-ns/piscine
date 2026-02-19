/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:47:53 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/15 12:59:09 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Aqui é pedido um programa, pelo que deve incluir uma função main no
// seu ficheiro.c.
// • Escreva um programa que mostre os argumentos recebidos na linha de comando.
// • Um por linha na mesma ordem da linha de comando.
// • Deve mostrar todos os argumentos, excepto o argv[0].

// • Exemplo :
// $>./a.out test1 test2 test3 | cat -e
// test1$
// test2$
// test3$
// $>

#include <unistd.h>

void	my_print(char *arg)
{
	while (*arg)
	{
		write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i_arg;

	i_arg = 1;
	while (argv[i_arg])
	{
		my_print(argv[i_arg]);
		i_arg++;
	}
}
