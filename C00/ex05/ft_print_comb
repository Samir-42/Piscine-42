void ft_print_comb(void)
{
    int i,j,k;
    i = '0';
    while(i <= '7')
    {
        j = i + 1;
        while(j <= '8')
        {
            k = j + 1;
            while(k <= '9')
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);

                if(i != '7')
                    write(1, ", ", 2);
                else
                    write(1, "\n", 1);

                k++;
            }
            j++;
        }
        i++;
    }
}