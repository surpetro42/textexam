int		max(int* tab, unsigned int len)
{
    if(len == 0)
        return 0;
    int bff = tab[0];
    int i = 0;
    while(i < len)
    {
        if(bff < tab[i])
        bff = tab[i];
        i++;
    }
    return bff;
}