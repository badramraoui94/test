#include <unistd.h>

void    scpa(char *s)
{
    int i;

    i = 0;
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;
    write(1, &s[i], 1);
    i++;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i + 1] == ' ' || s[i + 1] == '\t'))
            s[i] -= 32;
        if (s[i + 1] == '\0')
            s[i] -= 32;
        write(1, &s[i], 1);
        i++;
    }
}

int main()
{
    char s[] = "__Heoo woRD hOW aRe YOU   v";
    scpa(s);
}