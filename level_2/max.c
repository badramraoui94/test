#include <stdio.h>

int max(int *tab, unsigned int len)
{
    unsigned int i;

    i = 0;
    if (!len)
        return (0);
    int res = tab[0];
    while (i < len)
    {
        if (res < tab[i])
            res = tab[i];
        i++;
    }
    return (res);
}

int main()
{
    int tab[4] = {3, 1, 123, 969};
    printf("%d\n", max(tab, 4));
}
