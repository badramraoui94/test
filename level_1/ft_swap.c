#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 156465460;
    int b = 5;
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}