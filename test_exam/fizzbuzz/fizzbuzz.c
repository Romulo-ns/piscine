// print 1 a 100
// multiplo de 3 fizz
// multiplo de 5 buzz
// multiplo de 3 e 5 fizzbuzz
// funcao
#include <unistd.h>
#include <stdio.h>

char putnumber(int nb)
{
	if (nb >= 10)
		putnumber(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
    return (0);
}

int  fizzbuzz (void)
{
    int nb;
    
    nb = 1;
    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 == 0 )
	        write(1, "fizzbuzz", 8);
        else if (nb % 3 == 0)
	        write(1, "fizz", 4);
        else if (nb % 5 == 0)
            write(1, "buzz",4);
        else
            putnumber(nb);
        write(1, "\n",1);
        nb++;
    }
    return (0);
}
