/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:38:38 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/11 23:50:15 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função recursiva que retorne uma potência de um número.
// • Uma potência menor que 0 retorna 0.
// • Não deve gerir o "int overflow", o retorno da função será indefinido.
// • Nós decidimos que a potência de 0 sobre 0 deve retornar 1.

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

// int main ()
// {
//     printf("total = %d", ft_recursive_power( 3, 3));
//     return (0);
// }
