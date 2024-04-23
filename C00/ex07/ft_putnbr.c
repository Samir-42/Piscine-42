void ft_putnbr(int nb)
{
    if(nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        nb %= 10;
        nb += 48;
        write(1, &nb, 1);
    }
    else
    {
        nb += 48;
        write(1, &nb, 1);
    }
}