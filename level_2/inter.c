#include <unistd.h>
int check(char *s, char c, int l)
{
    int i=0;
    while(i < l)
    {
        if(s[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int main(int ac, char **av)
{
    int i;
    int k;
    i = 0;
    if (ac == 3)
    {
        while (av[1][i] != '\0')
        {
            k = 0;
            while (av[2][k] != '\0')
            {
                if (av[1][i] == av[2][k])
                {
                    if(check(av[1], av[1][i], i) == 0)
                    {
                        write(1, &av[1][i], 1); 
                        break;
                    }
                }
                k++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}


// #include <unistd.h>

// int	iter(char *str, char c, int len)
// {
// 	int	i = 0;

// 	while (str[i] && (i < len || len == -1))
// 		if (str[i++] == c)
// 			return (1);
// 	return (0);
// }

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	if (argc == 3)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
// 				write(1, &argv[1][i], 1);
// 			i += 1;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }