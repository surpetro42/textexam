#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int bff = 0;
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                bff = argv[1][i] - 'a';
                argv[1][i] = 'z' - bff;
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                bff = argv[1][i] - 'A';
                argv[1][i] = 'Z' - bff;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}