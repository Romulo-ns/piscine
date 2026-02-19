/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi17.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:36:04 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/18 14:02:16 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int sinal;
    int total;

    total = 0;
    i = 0;
    sinal = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sinal *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        total = total * 10 + (str[i] - '0');
        i++;
    }
    return (total * sinal);
}

int main ()
{
    char x[] = "   -992882aba1298 ";

    printf("%d", ft_atoi(x));

    return (0);
}