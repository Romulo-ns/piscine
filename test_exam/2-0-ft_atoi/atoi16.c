/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:36:04 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/16 12:05:18 by romdo-na         ###   ########.fr       */
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
    int sinal;
    int i;
    int total;
    
    i = 0;
    total = 0;
    sinal = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sinal *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        total = total * 10 + (str[i] - '0');
        i++;
    }
    return (total * sinal);
}

int main ()
{
    printf("%d", ft_atoi("   -145265asd65"));
}