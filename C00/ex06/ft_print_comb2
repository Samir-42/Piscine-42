void ft_print_comb2(void)
{
    int i, j;
    i = 0;
    while(i <= 98)
    {
        j = i + 1;
        while(j <= 99)
        {
            if(i <= 9 && j <= 9)
            {
                write(1, "0", 1);
                ft_print_numbers(i);
                write(1, " 0", 2);
                ft_print_numbers(j);
                write(1, ", ", 2);
            }
            else if(i <= 9 && j > 9)
            {
                write(1, "0", 1);
                ft_print_numbers(i);
                write(1, " ", 1);
                ft_print_numbers(j);
                write(1, ", ", 2);
            }
            else if(i > 9 && j > 9 && i < 98)
            {
                ft_print_numbers(i);
                write(1, " ", 1);
                ft_print_numbers(j);
                write(1, ", ", 2);
            }
            else if(i == 98)
            {
                ft_print_numbers(i);
                write(1, " ", 1);
                ft_print_numbers(j);
                write(1, "\n", 1);
            }
            j++;
        }
        i++;
    }
}