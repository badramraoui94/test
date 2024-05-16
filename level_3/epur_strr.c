#include <unistd.h>

int rev(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    i--;
    while (s[i] == ' ' || s[i] == '\t')
        i--;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 2)
    {
        j = rev(av[1]);
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i] != '\0' && i <= j)
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                write(1, "   ", 3);
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}