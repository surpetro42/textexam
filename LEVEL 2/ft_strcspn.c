#include <stdio.h>
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int len = 0;
    int i = 0;
    while (s[len])
    {
        i = 0;
        while(reject[i])
        {
            if(s[len] == reject[i])
                return len;
            i++;
        }
        len++;
    }
    return i;
}