#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
    int i;

    i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main (int argc, char **argv)
{
    unsigned char octet;

    if (argc == 2) 

    octet = atoi(argv[1]);
    print_bits(octet);
    printf("\n");

    return 0;

}