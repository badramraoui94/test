// #include <stdio.h>
// #include <stdlib.h>

// char    *ft_strncpy(char *s1, char *s2, int n)
// {
//     int i = 0;
//     while (s2[i] && i < n)
//     {
//         s1[i] = s2[i];
//         i++;
//     }
//     s1[i] = '\0';
//     return (s1);
// }

// char    **ft_split(char *str)
// {
//     int i = 0;
//     int j = 0;
//     int wc = 0;
//     char    **tab;
//     int k;

//     while(str[i])
//     {
//         while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
//             i++;
//         if (str[i])
//             wc++;
//         while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
//             i++;
//     }
//     tab = (char **)malloc(sizeof(char *) * (wc + 1));
//     i = 0;
//     while (str[i])
//     {
//         while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
//             i++;
//         j = i;
//         while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
//             i++;
//         if (i > j)
//         {
//             tab[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
//             ft_strncpy(tab[k++], &str[j], i - j);
//         }
//     }
//     tab[k] = NULL;
//     return (tab);
// }

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str);

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s\n", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}