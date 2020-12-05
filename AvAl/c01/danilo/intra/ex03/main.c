#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 123;
    b = 2;

    printf("%d  %d\n| %d  | %d\n",  a, b, div, mod);
    ft_div_mod(a, b, &div, &mod);
    printf("%d  %d\n| %d  | %d\n",  a, b, div, mod);

}