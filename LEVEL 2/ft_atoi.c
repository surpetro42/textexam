int	ft_atoi(const char *str)
{
    int i = 0;
    int m = 1;
    int res = 0;
    while(str[i] <= 32)
        i++;
    if(str[i] == '-')
        m = -1;
    while(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
        res = res * 10 + str[i++] - '0';
    return res * m;
}