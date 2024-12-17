#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int bff;
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                bff = 'a' - argv[1][i] - 1;
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                bff = 'A' - argv[1][i] - 1;
            else
                write(1, &argv[1][i], 1);
            bff *= -1;
            while(bff > 0)
            {
                write(1, &argv[1][i], 1);
                bff--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}