#include "push_swap.h"

static void     move_down(int *tab);
static void     move_up(int *tab);

void    pa(int *a, int *b)
{
    if (b[0] != 0)
    {
        move_down(a);
        a[0] = b[0];
        move_up(b);
    }
}

void    pb(int *a, int *b)
{
    if (a[0] != 0)
    {
        move_down(b);
        b[0] = a[0];
        move_up(a);
    }
}

static void     move_down(int *tab)
{
    size_t  len;

    len = ft_strlen_int(tab);
    while (len > 0)
    {
        tab[len] = tab[len - 1];
        len--;
    }
}

static void     move_up(int *tab)
{
    size_t  i;

    i = 0;
    while (tab[i])
    {
        tab[i] = tab[i + 1];
        i++;
    }

}