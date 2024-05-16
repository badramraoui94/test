unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;
    if (a == 0 || b == 0)
        return (0);

    if (n > a)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}

int max(int *tab, unsigned int l)
{
    int i = 0;
    int res = tab[0];

    while (i < l)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return (res);
}

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            return (0);
    }
    return (1);
}

void	print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}