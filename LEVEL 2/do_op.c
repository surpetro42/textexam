#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        int res = 0;
        if(argv[2][0] == '+')
        {
            res = x + y;
            printf("%d", res);
        }
        if(argv[2][0] == '-')
        {
            res = x - y;
            printf("%d", res);
        }
        if(argv[2][0] == '*')
        {
            res = x * y;
            printf("%d", res);
        }
        if(argv[2][0] == '/')
        {
            res = x / y;
            printf("%d", res);
        }
        if(argv[2][0] == '%')
        {
            res = x % y;
            printf("%d", res);
        }
    }
    printf("\n");
    return 0;
}