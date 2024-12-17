#include <unistd.h>

void ft_f(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    while(s[i] <= 32)
        i--;
    if(s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] ^ 32;
    i--;
    while(i > 0)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] ^ 32;
        while(s[i] == ' ')
        {
            i--;
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] ^ 32;
        }
        i--;
    }
    i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    while(argv[i])
    {
        ft_f(argv[i]);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}