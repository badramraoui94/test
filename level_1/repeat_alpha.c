#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int     i;
        int     j;

        i = 0;
        j = 1;
        while (av[1][i] != '\0')
        {
            j = 1;
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                j = av[1][i] - 64;
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                j = av[1][i] - 96;
            while (j--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// int main()
// {
//     char c = 'a';
//     while (c <= 'z')
//     {
//         write(1, &c, 1);
//         c++;
//     }
// }