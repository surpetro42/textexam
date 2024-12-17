#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;
    while(argv[j])
    {
        while(argv[j][i])
        {
            if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                argv[j][i] = argv[j][i] ^ 32;
            while(argv[j][i] == ' ')
            {
                i++;
                if(argv[j][i] >= 'a' && argv[j][i] <= 'z')
                    argv[j][i] = argv[j][i] ^ 32;
            }
            if(argv[j][0] >= 'a' && argv[j][0] <= 'z')
                argv[j][0] = argv[j][0] ^ 32;
            i++;
        }
        i = 0;
        while(argv[j][i])
            write(1, &argv[j][i++], 1);
        i = 0;
        write(1, "\n", 1);
        j++;
    }
    
    write(1, "\n", 1);
    return 0;
}