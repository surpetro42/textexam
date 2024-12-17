#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int i = 0;
    int n = nbr;
    int len = 0;
    if(n < 0)
    {
        len++;
        n *= -1;
    }
    while(n)
    {
        len++;
        n /= 10;
    }
    char *res = (char *)malloc((sizeof(char) * len) + 1);
    res[len] = '\0';
    if(nbr == 0)
    {
        res[0] = '0';
        res[len] = '\0';
        return (res);
    }
    while(nbr)
    {
        res[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    printf("%s\n", res);
    return res;
}

int main()
{

    int x = 24;
    ft_itoa(x);
    return 0;
}