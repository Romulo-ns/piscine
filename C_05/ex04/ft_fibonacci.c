/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:51:37 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/10 15:25:03 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função ft_fibonacci que retorne o n-iésimo elemento da
// sequência de Fibonacci, sendo o primeiro elemento com índice 0. Vamos
// considerar que a sequência de Fibonacci começa por 0, 1, 1, 2.
// • Não deve gerir o "int overflow", o retorno da função será indefinido.
// • Evidentemente, ft_fibonacci deverá ser recursiva.
// • Se index for inferior a 0, a função retornará -1.

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main ()
{
    printf("fibonacci = %s", ft_fibonacci(5));
}