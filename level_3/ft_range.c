#include <stdlib.h>

int ft_range(int start, int end)
{
    int i = 0;
    int *p;

    if (end >= start)
        p = malloc(sizeof(int) * (start - end + 1));
    else if (end <= start)
        p = malloc(sizeof(int) * (end - start + 1));
    if (!p)
        return (NULL);
    if (end >= start)
    {
        while (end >= start)
        {
            p[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while (start >= end)
        {
            p[i] = start;
            start--;
            i++;
        }
    }
    return (p);
}