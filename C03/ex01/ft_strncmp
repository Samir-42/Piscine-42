int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int nbr, i;

    nbr = 0;
    i = 0;

    while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if(s1[i] != s2[i])
            nbr = -1;

        i++;
    }
    return(nbr);
}