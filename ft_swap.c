#include "push_swap.h"

void    sa(int *a)
{
    int temp;

    if (ft_strlen_int(a) >= 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
}

void    sb(int *b)
{
    int     temp;
    
    if (ft_strlen_int(b) >= 2)
    {
        temp = b[0];
        b[0] = b[1];
        b[1] = temp;
    }
}

void    ss(int *a, int *b)
{
    sa(a);
    sb(b);
}