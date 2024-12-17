#include <unistd.h>

void ft_f(int n)
{
    char c;
    if(n > 10)
        ft_f(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    ft_f(argc - 1);
    return 0;
}