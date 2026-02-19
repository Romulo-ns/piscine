/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 06:44:44 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 12:32:05 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// O que é strcat (ideia original)
// A função strcat pega duas strings:
// dest → onde vamos juntar tudo
// src → o que será copiado
// Ela cola src no final de dest e retorna dest.

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_i;
	int	src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

// int main()
// {
//     char dest[] = "1234";
//     char src[] = "56789";

//     ft_strcat(dest, src);

//     printf("%s\n", dest);

//     return(0);
// }
