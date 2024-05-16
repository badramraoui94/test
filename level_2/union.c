#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int tab[256] = {0};
        int i = 1;
        while (i < 3)
        {
            int j = 0;
            while (av[i][j])
            {
                if (tab[(int)av[i][j]] == 0)
                {
                    tab[(int)av[i][j]] = 1;
                    write(1, &av[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
