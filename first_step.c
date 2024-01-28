#include "push_swap.h"

static int  check_lower_median(int *c, int nb, int half_len_a);
static void move_b(int a, int *b, t_count *pos);
int found_sup(int a, int *b, t_count *pos);
int	found_lower(int a, int *b, t_count *pos);

int    first_step(int *a, int *b, int *c, t_count *pos)
{
	size_t		half_len_a;

	half_len_a = pos->count_a/* / 2*/;

	// while (pos->count_b != half_len_a / 2)
	// {
	// 	if (check_lower_median(c, a[0], half_len_a) == 1)
	// 	{
	// 		move_b(a[0], b, pos);
	// 		pb(a, b, pos);
	// 	}
	// 	ra(a, pos);
	// }
	while (pos->count_b != half_len_a - 1)
    {
	//	if (check_lower_median(c, a[0], half_len_a) == 1)
	//	{
			move_b(a[0], b, pos);
			pb(a, b, pos);
	//	}
		//ra(a, &pos);
	}
	
return (0);
}

static int  check_lower_median(int *c, int nb, int half_len_a)
{
    int     i;

    i = 0;
    while (i < half_len_a)
    {
        if (nb == c[i])
            return (1);
        i++;
    }
    return (0);
}

static void move_b(int a, int *b, t_count *pos)
{
	size_t 	nb_move;
	int	nb_sup;
	int	rb_or_rrb;

	nb_sup = found_sup(a, b, pos);
	printf("\na = %d pos b = %zu nb_sup = %d\n", a, pos->count_b, nb_sup);
	while (nb_sup >= 0)
	{
		rb(b, pos);
		nb_sup--;
	}
}


int found_sup(int a, int *b, t_count *pos)
{
    int i;
    int min_diff = __INT_MAX__;
    int index;

	i = 0;
	index = -1;
    while (i < pos->count_b)
	{
        if (b[i] > a && b[i] < min_diff)
		{
            min_diff = b[i];
            index = i;
        }
		i++;
    }
	 printf("\n");
    printf("Pile B = ");
     for (int j = 0;j < pos->count_b ;j++)//TEST
         printf("[%d] ",b[j]);//TEST
   
	int o = found_lower(a, b, pos);
   	if(index == -1 && o != -1)
		return (o-1);
	if(a > b[0] && index == -1)
		return(0);

	// printf("\n&&&&&&& index = %d pos b = %zu &&&&&&&\n",index, pos->count_b);
	if (index == pos->count_b - 1)
		return (-1);
    return (index);
}

int	found_lower(int a, int *b, t_count *pos)
{
	int	i;
	int	min_diff = -__INT_MAX__;
	int	index;

	i = 0;
	index = -1;
	while (i < pos->count_b)
	{
		if (b[i] < a && b[i] > min_diff)
		{
			min_diff = b[i];
			index = i;
		}
		i++;
	}
	printf("m a = %d  mindiff =  %d   index = %d  m", a, min_diff, index);
	return (index);
}