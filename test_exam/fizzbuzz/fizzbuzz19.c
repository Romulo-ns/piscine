// print 1 a 100
// multiplo de 3 fizz
// multiplo de 5 buzz
// multiplo de 3 e 5 fizzbuzz
// funcao
#include <unistd.h>







void putnumber (int nb)
{
    if (nb >= 10)
        putnumber(nb / 10);
    write(1, &"0123456789"[nb % 10] ,1);
}

void fizzbuzz ()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "FizzBuzz", 8);
        else if (i % 5 == 0)
            write(1, "Buzz", 4);
        else if (i % 3 == 0)
            write(1, "Buzz", 4);
        else
            putnumber(i);
        write(1, "\n", 1);

        i++;
    }
}

int main ()
{
    fizzbuzz();
    return (0);
}