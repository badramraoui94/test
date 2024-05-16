#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int k = 0;
    char    *p;

    while (src[k])
        k++;
    p = malloc(sizeof(*p) * (k + 1));
    if (!p)
        return (NULL);
    while (src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}

int main()
{
    printf("%s\n", ft_strdup("badr"));
}