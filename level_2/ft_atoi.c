#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int     i;
    size_t  res;
    int     sign;

    i = 0;
    res = 0;
    sign = 1;
    while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    return (res * sign);
}

int main()
{
    printf("%d\n", ft_atoi("  +1   -+33"));
    printf("%d\n", atoi("  +1   -+33"));
}