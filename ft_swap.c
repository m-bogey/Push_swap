#include "push_swap.h"

void    sa(int *a, count *pos)
{
    int temp;

    if (pos->count_a >= 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
}

void    sb(int *b, count *pos)
{
    int     temp;
    
    if (pos->count_b >= 2)
    {
        temp = b[0];
        b[0] = b[1];
        b[1] = temp;
    }
}

void    ss(int *a, int *b, count *pos)
{
    sa(a, pos);
    sb(b, pos);
}