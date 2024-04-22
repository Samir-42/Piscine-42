char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;

    while(*(str+i) != '\0')
    {
        if( *(str+i) == ' ' && ( *(str+i+1) >= 'a' && *(str+i+1) <= 'z' ))
            *(str+i+1) = (*(str+i+1) - 32);

        else if( *(str+i) != ' ' && ( *(str+i+1) >= 'A' && *(str+i+1) <= 'Z' ))
            *(str+i+1) = (*(str+i+1) + 32);

        i++;
    }
    return(str);
}