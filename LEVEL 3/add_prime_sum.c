#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    int res = 0;
    int i = 0;
    if(s[i] == '-')
        return 0;
    while(s[i])
        res = res * 10 + s[i++] - '0';
    return res;
}

int ft_parz(int n)
{
    int i = 2;
    if(n <= 1)
        return 0;
    while(i * i <= n)
    {
        if(n % i == 0)
            return 0;
        i++; 
    }
    return 1;
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int sum = 0;
        int i = ft_atoi(argv[1]);
        while(i > 0)
        {
            if(ft_parz(i) == 1)
                sum += i;
            i--;
        }

        put_nbr(sum);
    }
    write(1, "\n", 1);
    return 0;
}