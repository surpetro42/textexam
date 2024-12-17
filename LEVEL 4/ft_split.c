#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int l = 0;
    char **res;
    if(!(res = (char **)malloc(sizeof(char *) * 256)));
        return NULL;    
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        j = 0;
        if(!(res[j] = (char *)malloc(sizeof(char) * 4096)));
            return NULL;
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            res[l][j++] = str[i++];
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        res[l][j] = '\0';
        l++;
    }
    res[l] = NULL;
    return res;
}