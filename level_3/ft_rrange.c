#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *p;
    int i = 0;

    p = NULL;
    if (end >= start)
        p = (int *)malloc(sizeof(int) * (end - start + 1));
    else if (end <= start)
        p = (int *)malloc(sizeof(int) * (start - end + 1));
    if (!p)
        return (NULL);
    if (end >= start)
    {
        while (end >= start)
        {
            p[i] = end;
            i++;
            end--;
        }
    }
    else if (end <= start)
    {
        while (end <= start)
        {
            p[i] = end;
            i++;
            end++;
        }
    }
    return (p);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_rrange(0, -3)[0]);
//     printf("%d\n", ft_rrange(0, -3)[1]);
//     printf("%d\n", ft_rrange(0, -3)[2]);
//     printf("%d\n", ft_rrange(0, -3)[3]);
// }