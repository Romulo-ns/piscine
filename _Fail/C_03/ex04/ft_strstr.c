/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 04:34:38 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/07 12:30:33 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduzir de forma idêntica o funcionamento da função strstr (man strstr).
// • Deve ser prototipada da seguinte maneira:

// Dentro de str, existe to_find?
// Se existir, me devolve o endereço onde ela começa.

// #include <unistd.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str[] = "Hello 42 Porto lisboa Portugal 2026";
//     char *found;

//     found = strstr(str, "lisboa");

//     if (found)
//         write(1, found, 8);
//     else
//         write(1, "Not found", 9);

//     return (0);
// }
