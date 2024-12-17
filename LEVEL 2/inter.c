#include <unistd.h>

int ft_count(char *s, char c)
{
    static int i = 0;
    int count = 0;
    int x = 0;
    if(s[i])
    {
        x = i;
        while(x >= 0) 
        {
            if(s[x] == c)
                count++;
            x--;
        }    
        i++;
    }
    return count;
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        int count = 0;
        while(argv[1][i])
        {
            while(argv[2][j])
            {
                if(argv[1][i] == argv[1][j])
                {
                    count = ft_count(argv[1], argv[1][i]);
                    if(count == 1)
                        write(1, &argv[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}