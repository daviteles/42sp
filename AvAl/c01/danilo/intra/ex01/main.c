#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int        main (void)
{
    int nbr;
    int *a;
    int **b;
    int ***c;
    int ****d;
    int *****e;
    int ******f;
    int *******g;
    int ********h;
    
    nbr = 10;
    
    a = &nbr;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    

    printf("%d\n", nbr);
   	ft_ultimate_ft(&h);
    printf("%d\n", nbr);
    return(0);
}