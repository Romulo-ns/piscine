#include <unistd.h>
#include <stdlib.h>

void    print_bits(unsigned char octet)
{
    int     i;
    char    bit;

    i = 7;
    while (i >= 0)
    {
        bit = ((octet >> i) & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
}

int main(int argc, char **argv)
{
    unsigned char   value;

    if (argc != 2)
        return (0);

    value = (unsigned char)atoi(argv[1]);
    print_bits(value);
    return (0);
}
