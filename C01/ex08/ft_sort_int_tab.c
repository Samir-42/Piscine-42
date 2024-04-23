void ft_sort_int_tab(int *tab, int size)
{
    int TemVar, i, j;
    
    TemVar = tab[0];
    i = 0;

    while(i < size-1)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                TemVar = tab[i];
                tab[i] = tab[j];
                tab[j] = TemVar;
            }
            j++;
        }
        i++;
    }
}