int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    t_list tmp = begin_list;

    while(tem)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}