/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:09:01 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/19 00:09:38 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função que vai concatenar o conjunto das strings
// apontadas por strs separando-as com sep.
// • O parâmetro size é obtido através do número de strings em strs.
// • Se size for 0, é preciso devolver uma string elegível de
// ser argumento para free().

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		count;
	int		i;
	int		strsep;

	i = -1;
	strsep = 0;
	count = 0;
	while (++i < size)
		count = count + ft_strlen(strs[i]);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	strsep = count + (size - 1) * ft_strlen(sep);
	all = (char *) malloc((strsep + 1) * sizeof(char));
	if (all == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(all, strs[i]);
		if (!(i == size - 1))
			ft_strcat (all, sep);
		i++;
	}
	return (all);
}

int	main(void)
{
	char	*strs[] = {"ola", "mundo", "42"};
	char	*sep = " - ";
	char	*result;

	result = ft_strjoin(3, strs, sep);
	if (!result)
		return (1);

	printf("%s\n", result);
	free(result);
	return (0);
}
