#include "push_swap.h"

int second_step(int *a, int *b, int *c, t_count *pos)
{
    int i;

    i = 0;

    while(b[0] != c[pos->count_b - 1])
    {
        rb(b, pos);
    }
    // ---------- print b ------------------------------
    printf("Pile B = ");
     for (int j = 0;j < pos->count_b ;j++)//TEST
         printf("[%d] ",b[j]);//TEST
    printf("\n");
    //---------------------------------------------------

    // ---------- print a ------------------------------
    printf("Pile A2 = ");
     for (int m = 0;m < pos->count_a ;m++)//TEST
         printf("[%d] ",a[m]);//TEST
    printf("\n");
    //---------------------------------------------------

    while(pos->count_b != 0)
    {
        pa(a, b, pos);
    }
    return (0);
}