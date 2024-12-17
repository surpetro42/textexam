#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
    int i = 0;
    int len = abs(start - end) + 1;
    int *res = (int *)malloc(sizeof(int) * len);
    if(!res)
        return NULL;
    while(i < len)
    {
        if(start < end)
        {
            res[i] = start;
            start++;
        }
        else
        {
            res[i] = start;
            start--;
        }
        i++;
    }
    return res;
}

int main()
{
    ft_range(1, 3);
}