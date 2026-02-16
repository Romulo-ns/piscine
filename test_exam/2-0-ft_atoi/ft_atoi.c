#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int total;

    i = 0;
    total = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        total = total * 10 + (str[i] - '0');
        i++;
    }
    return (total * sign);
}

int main ()
{
    printf("%d",ft_atoi("   -+1235asdkn "));
}
