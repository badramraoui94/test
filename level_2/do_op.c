#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 4)
    {
        if (av[2][i] == '+')
            printf("%d\n", atoi(&av[1][i]) + atoi(&av[3][i]));
        else if (av[2][i] == '-')
            printf("%d\n", atoi(&av[1][i]) - atoi(&av[3][i]));
        else if (av[2][i] == '*')
            printf("%d\n", atoi(&av[1][i]) * atoi(&av[3][i]));
        else if (av[2][i] == '/')
            printf("%d\n", atoi(&av[1][i]) / atoi(&av[3][i]));
        return (0);
    }
    printf("\n");
    return (0);
}
