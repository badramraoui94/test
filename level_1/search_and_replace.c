#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int i;
        int j;

        i = 0;
        j = 0;
        if (av[2][1] || av[3][1])
        {
            write(1, "\n", 1);    
            return (0);
        }
        while (av[1][i] != '\0')
        {
            if (av[1][i] == av[2][j])
                av[1][i] = av[3][j];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
