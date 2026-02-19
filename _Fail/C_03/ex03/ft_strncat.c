/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:40:05 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 12:31:45 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduzir de forma idêntica o funcionamento da função strcat (man strcat)
// juntar uma string no final de outra, mas com limite de caracteres

// Vai até o fim de dest, cola até nb letras de src, e garante que tudo 
// termina com \0.

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_dest;
	unsigned int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
	{
		i_dest++;
	}
	while (src[i_src] != '\0' && nb > 0)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
		nb--;
	}
	dest[i_dest] = '\0';
	return (dest);
}

// int main(void)
// {   
//     char dest[] = "123";
//     char src[] = "asdasd";

//     ft_strncat(dest, src, 0);

//     printf("%s\n", dest);
//     return(0);
// }
