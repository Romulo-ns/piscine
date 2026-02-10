/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:36:36 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/10 11:19:39 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreve uma função que conte e retorne o numero de caracteres numa string.

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != "\0")
	{
		i++;
	}
	return (i);
}
