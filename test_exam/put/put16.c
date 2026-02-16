/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put16.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:02:19 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/16 12:35:54 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreve uma função que mostre o número passado como argumento. A função
// deverá ser capaz de mostrar todos os valores possíveis numa variável 
// de tipo int.

// • Por exemplo:
// ◦ ft_putnbr(42) mostra "42".

#include <unistd.h>

char putnumber (int nb)
{
    long int l_nb;

    l_nb = nb;
    if (l_nb < 0)
    {
        l_nb *= -1;
        write(1 , "-", 1);
    }
    if (l_nb >= 10)
        putnumber(l_nb / 10);
    write(1, &"0123456789"[l_nb % 10], 1);
    return (0);
}

int main ()
{
    putnumber(-646);
}
