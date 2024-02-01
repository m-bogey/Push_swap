#include "push_swap.h"

int     found_one(int a, int b, int *tab_index, t_count *pos);
void    rb_or_rrb(int a, int *b, int *tab_index, t_count *pos);

int second_step(int *a, int *b, int *tab_index, t_count *pos)
{
    int     index_dif;
	int p = 0;
   
	while(pos->count_b > 0)
	{
        // index_dif = found_one(a[0], b[0], tab_index, pos);
        // while(found_one(a[pos->count_a], a[0], tab_index, pos) == 1)
        // {
        //    // printf("hello");
        //     rra(a, pos);
        // }
        index_dif = found_one(a[0], b[0], tab_index, pos);
    	if(b[0] < a[0] && index_dif == 1)
        {
        	pa(a, b, pos);
            if(found_one(a[pos->count_a], a[0], tab_index, pos) == 1)
                rra(a, pos);
        }
        else if(a[pos->count_a - 1] > b[0])
            rb_or_rrb(a[0], b, tab_index ,pos);
        // else
        // {
        //     pa(a, b, pos);
        //     ra(a, pos);
        // }
	}

	printf("\n");
    printf("Pile A = ");
      for (int j = 0;j < pos->count_a ;j++)//TEST
          printf("[%d] ",a[j]);//TEST
	printf("\n");
    printf("Pile B = ");
     for (int j = 0;j < pos->count_b ;j++)//TEST
         printf("[%d] ",b[j]);//TEST

    return (0);
}

int     found_one(int a, int b, int *tab_index, t_count *pos)
{
    size_t  len_tab;
    size_t  i;
    size_t  index_b;

    len_tab = pos->count_a + pos->count_b;
    i = 0;
    while(i < len_tab)
    {
        if(tab_index[i] == b)
            index_b = i;
        i++;
    }
    if(tab_index[index_b + 1] == a && index_b + 1 <= len_tab)
        return(1);
    return (0);
}

void    rb_or_rrb(int a, int *b, int *tab_index, t_count *pos)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while(i < pos->count_a + pos->count_b)
    {
        if(a == tab_index[i])
            break;
        i++;
    }
    while(j < pos->count_b)
    {
        if(b[j] == tab_index[i - 1])
            break;
        j++;
    }
    if(j < pos->count_b / 2)
    {
        while (j > 0)
        {
            rb(b, pos);
            j--;
        }
    }
    else
    {
        while (pos->count_b - j > 0)
        {
            rrb(b, pos);
            j++;
        }
    }
}
