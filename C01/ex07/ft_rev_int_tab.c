void ft_rev_int_tab(int *tab, int size)
{
    int TemVar, i;
    i = 0;
    
    while(i < size/2)
    {
        TemVar = tab[i];
        tab[i] = tab[size-i];
        tab[size-i] = TemVar;
        
        i++;
    }
}