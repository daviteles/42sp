#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size;
    size = 3;

    ft_rev_int_tab(tab, size);
    return (0);
}