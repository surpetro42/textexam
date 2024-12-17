#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    if(s[0] == '-')
        return 0;
    int res = 0;
    int i = 0;
    while(s[i])
        res = res * 10 + s[i++] - '0';
    return res;
}

void ft_hex(int n)
{
    char *s = "0123456789abcdef";
    while(n > 16)
        ft_hex(n / 16);
    write(1, &s[n % 16], 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int nbr = ft_atoi(argv[1]);
        ft_hex(nbr);
    }
    write(1, "\n", 1);
    return 0;
}