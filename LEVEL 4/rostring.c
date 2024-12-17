#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argv[1])
    {
        int i = 0;
        int j = 0;
        int l = 0;
        int bff;
        while(argv[1][j] != '\0' && argv[1][i] <= 32)
            i++;
        l = i;
        bff = l;
        while(argv[1][j] != '\0' && argv[1][i] > 32)
            i++;
        j = i;
        while(argv[1][j] != '\0' && argv[1][j] <= 32)
            j++;
        while(argv[1][j] != '\0' && argv[1][j] >= 32)
        {
            if(argv[1][j] == ' ')
                write(1, " ", 1);
            while(argv[1][j] == 32)
                j++;    
            write(1, &argv[1][j++], 1);
            
        }
        while(argv[1][l] > 32)
        {

            if(l == bff && l != 0)
                write(1, " ", 1);
            write(1, &argv[1][l++], 1);
        }   
    }
    write(1, "\n", 1);
    return 0;
}