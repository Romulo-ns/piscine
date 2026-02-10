/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:49:15 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/09 22:49:05 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função recursiva que retorne o fatorial do número
// passado como parâmetro.
// • Se o argumento não for válido, a função deve retornar 0.
// • Não deve gerir o "int overflow", o retorno da função será indefinido.

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
        
    return (nb *= ft_recursive_factorial(nb - 1));
}

int main ()
{
    printf("%d", ft_recursive_factorial(5));
    return(0);
}
