#include <stdio.h>

int fffff(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            return (0);
    }
    return (1);
}

int    main(void)
{
    printf("%d\n", fffff(1));
    // printf("%d\n", is_power_of_2(1023));
    // printf("%d\n", is_power_of_2(0));
    // printf("%d\n", is_power_of_2(1));
}