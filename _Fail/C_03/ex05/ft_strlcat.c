/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 07:23:21 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 12:28:51 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// - Mede o tamanho atual de dst
// - Mede o tamanho de src
// - Verifica quanto espaço real sobra em dst (usando size)
// - Copia o máximo possível de src
// - Sempre tenta deixar dst terminada com '\0'
// - Retorna um valor que indica se houve truncamento

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	dend;

	dlen = 0;
	slen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	dend = dlen;
	if (size < dlen)
		return (size + slen);
	i = 0;
	while (src[i] && (dlen + i) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dend + slen);
}

// int main ()
// {
//     char dest[] = "abc";
//     char src[] = "def";

//     printf("%d\n", ft_strlcat(dest, src, 0));
//     printf("%s\n", dest);

//     return(0);
// }
