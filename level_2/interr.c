#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i;
        int tab[256] = {0};
        while (av[1][i] != '\0')
        {
            if (tab[(int)av[1][i]] == 0)
            {
                tab[(int)av[1][i]] = 1;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}