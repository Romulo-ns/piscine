/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:16:46 by romdo-na          #+#    #+#             */
/*   Updated: 2026/02/16 16:30:38 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>
#include <stdio.h>

int len(char *str)
{
    int i;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (int argc, char **argv)
{
    char *s1;
    int i_s1;
    char *s2;
    int i_s2;
    char print_str[len(argv[1]) + 1];
    int i_print_str;
    int count;

    s1 = argv[1];
    s2 = argv[2];
    *print_str = '\0';
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    i_s1 = 0;
    while (s1[i_s1] != '\0')
    {
        i_s2 = 0;
        while (s2[i_s2] != '\0')
        {
            if (s1[i_s1] == s2[i_s2])
            {
                i_print_str = 0;
                count = 0;
                while (print_str[i_print_str] != '\0')
                {
                    if (s1[i_s1] == print_str[i_print_str])
                    {
                        count++;
                    }
                    i_print_str++;
                }
                if (count == 0)
                {
                    print_str[i_print_str] = s1[i_s1];
                    print_str[i_print_str + 1] = '\0';
                }
            }
            i_s2++;
        }
        i_s1++;
    }
    i_print_str = 0;
    while (print_str[i_print_str] != '\0')
    {
        write(1, &print_str[i_print_str], 1);
        i_print_str++;
    }
    write(1, "\n", 1);
    return (0);
}
