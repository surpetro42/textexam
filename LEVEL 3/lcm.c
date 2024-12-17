#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(!a || !b)
        return 0;
    int n = 0;
    if(a > b)
        n = a;
    else
        n = b;
    while(1)
    {
        if(n % a == 0 && n % b == 0)
            return n;
        n++;
    }
}

int main()
{
    int res = lcm(14, 21);
    printf("%d\n", res);

    return 0;
}