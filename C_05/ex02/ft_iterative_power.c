/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:32:11 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/09 19:16:34 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função iterativa que retorne uma potência de um número. 
// Uma potência inferior a 0 retornará 0.
// • Não deve gerir o "int overflow", o retorno da função será indefinido.
// • Nós decidimos que a potência de 0 sobre 0 deve retornar 1.

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int total;

    if (power == 0)
        return (1);

    total = 1;
    while (power > 0)
    {
        total *= nb;
        power--;
    }
    return (total);
}

int main ()
{
    printf("%d", ft_iterative_power(2, 8));
}