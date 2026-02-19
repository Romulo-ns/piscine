#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    while (argc == 2 && argv[1][i])
    {
        c = argv[1][i];
        if (c >= 'a' && c <= 'z')
        {
            c = 'a' + 'z' - c;
            write(1, &c, 1);
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + 'Z' - c;
            write(1, &c, 1);
        }
        else
        {
            write(1, &c, 1);
        }

        i++;
    }
    write(1, "\n", 1);
    return (0);
}


// 155 maiuscluas 65 + 90
// 219 minusculas 122 + 97