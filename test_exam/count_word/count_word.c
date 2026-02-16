// A word is a section of string delimited by spaces or by the start/end of
// the string.

#include <stdio.h>

int count_word (char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != 32)
            if (str[i + 1] == 32 || str[i + 1] == '\0')
                count++;
        i++;
    }
    return (count);
}

int main (int argc, char **argv)
{
    // char *x;
    // x = "ola tudo bem?";

    if (argc == 2)

        printf("%d", count_word(argv[1]));
    
    else

        printf("cocococo");



    return (0);

}