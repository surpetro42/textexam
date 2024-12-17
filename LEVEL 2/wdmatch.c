#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while(argv[2][j])
            if(argv[2][j++] == argv[1][i])
                i++;
        if(!argv[1][i])
        {
            while(argv[1][k])
                write(1, &argv[1][k++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}