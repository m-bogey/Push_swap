#include "push_swap.h"

int found_one(int b, int *a, t_count *pos);
int	found_lower(int b, int *a, t_count *pos);

int second_step(int *a, int *b, int *tab_index, t_count *pos)
{
    int     index_dif;
	int p = 0;

    index_dif = found_one(b[0], tab_index, pos);
printf("index dif = %d", index_dif);

	while(p < 100)
	{
    	if(b[0] < a[0] && index_dif == 1)
        	pa(a, b, pos);
	p++;
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
