#include <stdio.h>

void    ft_ft(int *nbr);

int        main (void)
{
    int nbr;
    nbr = 10;

    printf("%d", nbr);
    ft_ft(&nbr);
    printf("%d", nbr);
    return(0);
}