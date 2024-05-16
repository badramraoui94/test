int		max(int* tab, unsigned int len)
{
    unsigned int i;

    i = 0;
    if (!len)
        return (0);
    int res = tab[0];
    while (i < len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return (res);
}