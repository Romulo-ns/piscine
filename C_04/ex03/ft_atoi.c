/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:03:22 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 19:08:16 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreve uma função que converta o início da string para a sua representação
// em inteiro
// • A string pode começar por um número arbitrário de ’white space’ (como
// definido por o isspace(3))
// • A string pode ser seguido por um número arbitrário de sinais + ou -. 
// O sinal - vai mudar o sinal do inteiro retornado baseado no número 
// par ou impar de sinais -.
// • Por fim, a string deverá ser seguido por qualquer número da base 10
// • A função deve ler a string, desde que a string siga as regras e retorne
// o número encontrado até então.
// • Não deves considerar os overflows ou underflows, o resultado é 
// considerado indefinido nesses casos.

// exemplo:
// $>./a.out " ---+--+1234ab567"
// -1234

#include <stdio.h>

int ft_atoi(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }

    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return (result * sign);
}

int man ()
{
    printf("%c", ft_atoi(" ---+--+1234ab567"));
    return (0);
}
