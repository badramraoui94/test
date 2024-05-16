#include <unistd.h>

void putstr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (ac == 3)
    {
        while (av[2][j])
            if (av[2][j++] == av[1][i])
                i++;
        if (!av[1][i])
            putstr(av[1]);
    }
    write(1, "\n", 1);
}