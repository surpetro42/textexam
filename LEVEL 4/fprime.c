#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int nbr = atoi(argv[1]);
        while(nbr >= ++i)
        {
            if(nbr % i == 0)
            {
                printf("%d", i);
                if (nbr == i)
					break ;
                printf("*");
                nbr /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return 0;
}