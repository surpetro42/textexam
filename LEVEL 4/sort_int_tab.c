#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    
    if(size == 0)
        return ;
    int x = 0;
    int i = 0;
    int j = 1;
    while(i < size)
    {
        if(tab[i] > tab[j])
        {
            x = tab[i];
            tab[i] = tab[j];
            tab[j] = x;
        }
        j++;
        i++;
    }
    i = 0;
    while(i < size)
        printf("%d\n", tab[i++]);
}

int main()
{
    int tab[] = {1, 2, 12, 7, 3};
    sort_int_tab(tab ,5);
    return 0;
}