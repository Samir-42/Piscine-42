char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int size, i;

    size = ft_strlen(dest);
    i = 0;

    while(i < nb && src[i] != '\0')
    {
        dest[size] = src[i];

        size++;
        i++;
    }
    dest[size] = '\0';

    return(dest);
}