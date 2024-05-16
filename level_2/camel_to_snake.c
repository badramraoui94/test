#include <unistd.h>

int ft_alpha(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        if (!((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] += 32;
                write(1, "_", 1);
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
