#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        int i = 0;
        char x = argv[2][0];
        char y = argv[3][0];
        while(argv[1][i])
        {
            if(argv[1][i] == x)
                argv[1][i] = y;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}