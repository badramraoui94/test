#include <unistd.h>

void    scap(char *s)
{
    int i = 0;
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] -= 32;
    }
    write(1, &s[i], 1);
        i++;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
            s[i] -= 32;
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        while (i < ac)
        {
            scap(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}