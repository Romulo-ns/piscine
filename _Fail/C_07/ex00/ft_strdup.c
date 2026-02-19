/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:14:39 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/18 22:32:46 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduzir de forma idêntica o funcionamento da função strdup (man strdup).
// Ela faz basicamente três coisas:
// Mede o tamanho da string (strlen)
// Aloca memória suficiente (malloc)
// Copia o conteúdo (strcpy)
// Retorna o novo ponteiro
// Se não conseguir alocar memória → retorna NULL.

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
