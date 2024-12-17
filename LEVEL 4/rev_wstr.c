#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int j = 0;
        while(argv[1][i])
            i++;
        while(argv[1][i] <= 32)
            i--;
        while(i >= 0)
        {
            while(argv[1][i] > 32)
                --i;
            j = i;
            while(argv[1][++j] > 32)
                write(1, &argv[1][j], 1);
            if(i > 0)
                write(1, " ", 1);
            j = 0;
            i--;
        }
    }
    write(1, "\n", 1);
    return 0;
}