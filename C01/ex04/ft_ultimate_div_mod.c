void ft_ultimate_div_mod(int *a, int *b)
{
    int TemVar;
    
    TemVar = *a;
    *a /= *b;
    *b = TemVar % *b;
}