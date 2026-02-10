/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:43:03 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/09 22:41:24 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função iterativa que retorne um número. Esse número deve ser o
// resultado da operação fatorial a partir do número passado como parâmetro.
// • Se o argumento não for válido, a função deve retornar 0.
// • Não deve gerir o "int overflow", o retorno da função será indefinido.

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
        
    int i;

    i = nb - 1;
    while (i != 0)
    {
        nb *= i;
        i--;
    }

    return (nb);
}

int main ()
{
    printf("%d", ft_iterative_factorial(0));
    return (0);
}
