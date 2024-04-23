void ft_putstr(char *str)
{
    int size;

    size = ft_strlen(str);

    write(1, str, size);
}