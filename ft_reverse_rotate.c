#include "push_swap.h"

void    rra(int *a, count *pos)
{
    size_t  len;
    int     temp;

    len = pos->count_a - 1;
    temp = a[len];
    while (len > 0)
    {
        a[len] = a[len - 1];
        len--;
    }
    a[0] = temp;
}

void    rrb(int *b, count *pos)
{
    size_t  len;
    int     temp;

    len = pos->count_b - 1;
    temp = b[len];
    while (len > 0)
    {
        b[len] = b[len - 1];
        len--;
    }
    b[0] = temp;
}

void    rrr(int *a, int *b, count *pos)
{
    rra(a, pos);
    rrb(b, pos);
}