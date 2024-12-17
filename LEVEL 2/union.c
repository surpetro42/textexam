#include <unistd.h>

int ft_f(char c, char *s, int n)
{
    int i = 0;
    while(i < n)
    {
        if(s[i] == c)
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        while(argv[1][i])
            i++;
        while(argv[2][j])
            argv[1][i++] = argv[2][j++];
        argv[1][i] = '\0';
        i = 0;
        while (argv[1][i])
        {
            if(ft_f(argv[1][i], argv[1], i) == 1)
                write(1, &argv[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}