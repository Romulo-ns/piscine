/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put17.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:02:19 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/18 14:52:10 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreve uma função que mostre o número passado como argumento. A função
// deverá ser capaz de mostrar todos os valores possíveis numa variável 
// de tipo int.

// • Por exemplo:
// ◦ ft_putnbr(42) mostra "42".

#include <unistd.h>

int putnumber(int nb)
{
    long int l_int;

    l_int = nb;
    if (l_int < 0)
    {
        write(1, "-", 1);
        l_int *= -1;
    }
    if (l_int >= 10)
        putnumber(l_int / 10);
    write(1,&"0123456789"[l_int % 10], 1);
    return (0);
}


int main()
{
    putnumber(42);
    return (0);
}