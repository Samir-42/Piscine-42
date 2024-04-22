int ft_atoi(char *str)
{
    int nbr, sbt;

    nbr = 0;
    sbt = 1;

    while(*str != '\0')
    {
        if(*str == '+')
        {
            *str++;
            continue;
        }

        else if(*str == '-')
            sbt++;

        else if(*str >= '0' && *str <= '9')
        {
            nbr = nbr * 10;
            nbr = nbr + (*str - '0');
        }
        
        else
            break;

        *str++;
    }

    if(sbt % 2 == 0)
        nbr *= (-1);

    return(nbr);
}