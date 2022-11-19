#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int count;

    count = 0;

    while (count < size / 2)
    {
        temp = tab[count];
        tab[count] = tab [size-1-count];
        tab[size-1-count] = temp;
        count ++;
    }
}

int main ()
{
    int tab[4] =  {0, 1, 2, 3};
    int size = 4;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
    return(0);
}