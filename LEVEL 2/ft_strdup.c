char    *ft_strdup(char *src)
{
    char s[1000];
    int i = 0;
    while (src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return s;
}