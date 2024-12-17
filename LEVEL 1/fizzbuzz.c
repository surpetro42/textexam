#include <unistd.h>

void ft_p(int n)
{
    char s[] = "0123456789";
    if(n > 9)
        ft_p(n / 10);
    write(1, &s[n % 10], 1);
}

int main()
{
    int buff = 1;
    while(buff <= 100)
    {
        if(buff % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(buff % 3 == 0)
            write(1, "fizz",4);
        else if(buff % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_p(buff);
        write(1, "\n", 1);
        buff++;
    }
}