#include <unistd.h>
#include <stdio.h>

int strleng(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    char temp;
    int i_temp;
    int size;

    size = strleng(str) - 1;
    printf("size = %d\n", size);

    i = 0;
    while (i < size)
    {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        i++;
        size--;
    }
    
    i_temp = 0;
    while (str[i_temp] != '\0')
    {
        write(1,&str[i_temp],1);
        i_temp++;
    }
    return(0);
}

int main (int argc, char **argv)
{
    ft_strrev(argv[1]);
    return (0);
}