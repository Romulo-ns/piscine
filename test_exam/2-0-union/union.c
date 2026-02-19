#include <unistd.h>
#include <stdio.h>

int  ft_strlen(char *s)
{
    int i = 0;
    while (s && s[i])
        i++;
    return i;
}

int main(int argc, char **argv)
{
    char *s1;
    char *s2;
    char s3[ft_strlen(argv[1]) + 1];
    int i, j, x;
    int count;

    s1 = argv[1];
    s2 = argv[2];
    s3[0] = '\0';
    i = 0;
    while (argc == 3 && s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                count = 0;
                x = 0;
                while (s3[x] != '\0')
                {
                    if (s1[i] == s3[x])
                        count++;
                    x++;
                }
                if (count == 0 && s3[x] == '\0')
                {
                    s3[x] = s1[i];
                    s3[x + 1] = '\0';
                }
            }
            j++;
        }
        i++;
    }

    x = 0;
    while (s3[x] != '\0')
    {
        write(1, &s3[x], 1);
        x++;
    }
    
    write(1, "\n", 1);
    return (0);
}