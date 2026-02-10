/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:01:35 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/10 11:13:01 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreve uma função que mostre o número passado como argumento. A função
// deverá ser capaz de mostrar todos os valores possíveis numa variável 
// de tipo int.

// • Por exemplo:
// ◦ ft_putnbr(42) mostra "42".

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	c = 0;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
	}
	write(1, &c, 1);
}

int main ()
{
    ft_putnbr(-42895);
    return(0);
}
