#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int k;

        i = 0;
        k = ft_strlen(&av[1][i]) - 1;
        while (k)
        {
            write(1, &av[1][k], 1);
            k--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
