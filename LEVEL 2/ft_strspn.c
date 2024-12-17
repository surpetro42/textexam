#include <string.h>
#include <stdio.h>

char ft_str(const char *s, char c)
{
    int i = 0;
    while (s[i])
    {
        if(c == s[i])
            return s[i];
        i++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i])
    {
        if(ft_str(accept, s[i]) == 0)
            break;
        i++;
    }
    return i;
}