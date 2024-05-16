#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 2)
    {
        while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i] != '\0')
            i++;
        j = ft_strlen(av[1]) - 1;
        while (av[1][j] == ' ' || av[1][j] == '\t')
            j--;
        while (av[1][i] != '\0' && i <= j)
        {
            if ((av[1][i] == ' ' || av[1][i] == '\t' ) && (av[1][i + 1] == ' ' || av[1][i + 1] == '\t'))
            {
                write(1, " ", 1);
                while((av[1][i] == ' ' || av[1][i] == '\t'))
                    i++;
            }
            else
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}