#include <unistd.h>

char putnumber(int nb)
{
	long int l_int;

	l_int = nb;
	if (l_int < 0)
	{
		write(1,"-",1);
		l_int *= -1;
	}
	if (l_int >= 10)
		putnumber(l_int / 10);
	write(1, &"0123456789"[l_int % 10], 1);
    return (0);
}

int main ()
{
	putnumber(6494161);
}