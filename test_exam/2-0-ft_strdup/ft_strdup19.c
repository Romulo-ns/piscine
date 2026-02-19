#include <stdlib.h>
#include <stdio.h>


int str_len(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}   

char    *ft_strdup(char *src)
{
    char *str_dup;
    int i;

    str_dup = malloc(sizeof(char) * (str_len(src) + 1));
    if (!str_dup)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        str_dup[i] = src[i];
        i++;
    }
    return (str_dup);
}



int main ()
{
    printf("%s\n", ft_strdup("relaxa que vai passar"));
}