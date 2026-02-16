#include <unistd.h>
#include <stdio.h>

int str_len(char *str)
{
    int i;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (int agrc, char **argv)
{
    char *s1;
    int i_s1;
    char *s2;
    int i_s2;
    char my_print[str_len(argv[1]) + 1];
    int i_my_print;
    int count;
    
    if (agrc != 3)
    {
        write( 1, "\n", 1);
        return (0);
    }

    s1 = argv[1];
    s2 = argv[2];
    *my_print = '\0';

    i_s1 = 0;
    while (s1[i_s1] != '\0')
    {
        i_s2 = 0;
        while (s2[i_s2] != '\0')
        {
            if (s2[i_s2] == s1[i_s1])
            {
                count = 0;
                i_my_print = 0;
                while (my_print[i_my_print] != '\0')
                {
                    if (s1[i_s1] == my_print[i_my_print])
                    {
                        count++;
                    }
                    i_my_print++;
                }
                if (count == 0)
                {
                    my_print[i_my_print] = s1[i_s1];
                    my_print[i_my_print + 1] = '\0';
                }
            }
            i_s2++;
        }
        i_s1++;
    }

    i_my_print = 0;
    while (my_print[i_my_print] != '\0')
    {
        write(1,&my_print[i_my_print],1);
        i_my_print++;
    }
    write(1,"\n",1);

    return (0);
}