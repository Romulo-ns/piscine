// print 1 a 100
// multiplo de 3 fizz
// multiplo de 5 buzz
// multiplo de 3 e 5 fizzbuzz
// funcao
#include <unistd.h>

int fizz(void)
{
    int nb;

    nb = 0;
    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (nb % 3 == 0)
            write(1, "fizz\n", 5);
        else if (nb % 5 == 0)
            write(1, "buzz\n", 5);
        nb++;
    }
    return(0);  
}

int main ()
{
    fizz();
}