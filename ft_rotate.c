#include "push_swap.h"

void    ra(int *a, count *pos)
{
    int     temp;
    size_t  i;

    temp = a[0];
    i = 0;
    while (i < pos->count_a)
    {
        a[i] = a[i + 1];
        i++;
    }
    a[i - 1] = temp;
}

void    rb(int *b, count *pos)
{
    int     temp;
    size_t  i;

    temp = b[0];
    i = 0;
    while (i < pos->count_b)
    {
        b[i] = b[i + 1];
        i++;
    }
    b[i - 1] = temp;
}

void    rr(int *a, int *b, count *pos)
{
    ra(a, pos);
    rb(b, pos);
}