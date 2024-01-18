#include "push_swap.h"

void    ra(int *a)
{
    int     temp;
    size_t  i;

    temp = a[0];
    i = 0;
    while (a[i])
    {
        a[i] = a[i + 1];
        i++;
    }
    a[i - 1] = temp;
}

void    rb(int *b)
{
    int     temp;
    size_t  i;

    temp = b[0];
    i = 0;
    while (b[i])
    {
        b[i] = b[i + 1];
        i++;
    }
    b[i - 1] = temp;
}

void    rr(int *a, int *b)
{
    ra(a);
    rb(b);
}