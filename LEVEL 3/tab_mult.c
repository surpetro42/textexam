#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *s)
{
    int res = 0;
    int i = 0;
    if(s[0] == '-')
        return 0;
    while(s[i])
        res = res * 10 + s[i++] - '0';
    return res;
}

void ft_print(int i)
{
    char c;
    if(i > 10)
        ft_print(i / 10);
    c = i % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int n = ft_atoi(argv[1]);
        int res = 0;
        while (i < 10)
        {
            ft_print(i);
            write(1, " x ", 3);
            ft_print(n);
            write(1, " = ", 3);
            res = i * n;
            ft_print(res);
            write(1, "\n", 1);
            i++;
        }
    }
    // write(1, "\n", 1);
}