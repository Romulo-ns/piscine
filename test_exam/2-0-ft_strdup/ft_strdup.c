#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int strleng(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dup;
    int i;

    dup = malloc((strleng(src) + 1) * sizeof(char));
    if (dup == NULL)
        return(NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main()
{
    // char *x;
    // char y[] = "asdcvb";

    // x = ft_strdup(y);
    // printf("x = %s", x);
    printf("x = %s", ft_strdup("oi tudo bem?"));
    return (0);
}