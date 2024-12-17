#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *new = *begin_list;

    while(new)
    {
        if((cmp)(new->data, data_ref) == 0)
        {
            *begin_list = new->next;
            free(new);
            new = begin_list;
        }
        else
            new = new->next;
    }
}