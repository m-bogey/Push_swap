#include "push_swap.h"

//

static int  check_lower_median(int *c, int nb, int half_len_a);
static void move_b(int *a, int *b, t_count *pos);
int found_sup(int a, int *b, t_count *pos);
int	found_lower(int a, int *b, t_count *pos);
static int found_best(int *a, int *b, t_count *pos);
void	swap_last_a(int *a, t_count *pos);

int    first_step(int *a, int *b, int *tab_index, t_count *pos)
{
	size_t	len_a_less_three;
	size_t	num;
	size_t	chunks;


	num = 0;
	chunks = 0.000000053 * (pos->count_a * pos->count_a) + 0.03 * (pos->count_a) + 14.5;
	len_a_less_three = pos->count_a - 3;
	while(pos->count_b <= len_a_less_three && pos->count_a > 3)
	{
		if(a[0] <= tab_index[num] && a[0] < tab_index[len_a_less_three])
		{
			pb(a, b, pos);
			num++;
		}
		else if(a[0] <= tab_index[num + chunks] && a[0] < tab_index[len_a_less_three])
		{
			pb(a, b, pos);
			rb(b, pos);
			num++;
		}
		else
			ra(a, pos);
	}
	if (pos->count_a == 2 || pos->count_a == 3)
		swap_last_a(a, pos);

	// size_t		half_len_a;

	// half_len_a = pos->count_a/* / 2*/;

	// // while (pos->count_b != half_len_a / 2)
	// // {
	// // 	if (check_lower_median(c, a[0], half_len_a) == 1)
	// // 	{
	// // 		move_b(a[0], b, pos);
	// // 		pb(a, b, pos);
	// // 	}
	// // 	ra(a, pos);
	// // }
	// while (pos->count_b != half_len_a)
    // {
	// //	if (check_lower_median(c, a[0], half_len_a) == 1)
	// //	{
	// 		move_b(a, b, pos);
	// 		pb(a, b, pos);
	// //	}
	// 	//ra(a, &pos);
	// }
return (0);
}

void	swap_last_a(int *a, t_count *pos)
{
	if (pos->count_a == 2)
	{
		if(a[0] > a[1])
			sa(a, pos);
	}
	if (pos->count_a == 3)
	{
		if (a[0] < a[2] && a[2] < a[1])
		{
			sa(a, pos);
			ra(a, pos);
		}
		else if (a[2] < a[0] && a[0] < a[1])
			rra(a, pos);
		else if (a[1] < a[0] && a[0] < a[2])
			sa(a, pos);
		else if (a[1] < a[2] && a[2] < a[0])
			ra(a, pos);
		else if (a[2] < a[1] && a[1] < a[0])
		{
			sa(a, pos);
			rra(a, pos);
		}
	}
}

// static int  check_lower_median(int *c, int nb, int half_len_a)
// {
//     int     i;

//     i = 0;
//     while (i < half_len_a)
//     {
//         if (nb == c[i])
//             return (1);
//         i++;
//     }
//     return (0);
// }

// static int found_best(int *a, int *b, t_count *pos)
// {
// 	int	nb_sup;

// 	nb_sup = found_sup(a[0], b, pos);

// 	//1 . je regarde le meiller nb_sup

// 	//2 j'applique a a le meuilleur nb_supp ex : si n0 rien si n1 swap a si n2 r ou rr je sais plus 

// 	//3 return nsupp 
// 	return (nb_sup);
// }

// static void move_b(int *a, int *b, t_count *pos)
// {
// 	size_t 	nb_move;
// 	int	nb_best;

// 	nb_best = found_best(a, b, pos);


// 	//nb_sup[0] = found_best(nb_sup, a, b, pos);
// 	//printf("\na = %d pos b = %zu nb_sup = %d\n", a, pos->count_b, nb_sup);
// 	if (nb_best <= pos->count_b / 2)
// 	{
// 		while (nb_best > 0 && pos->count_b > 1)
// 		{
// 			rb(b, pos);
// 			nb_best--;
// 		}
// 	}
// 	else
// 	{
// 		nb_best = pos->count_b - nb_best;
// 		while (nb_best > 0 && pos->count_b > 1)
// 		{
// 			rrb(b, pos);
// 			nb_best--;
// 		}
// 	}
// }


// int found_sup(int a, int *b, t_count *pos)
// {
//     int i;
//     int min_diff = __INT_MAX__;
//     int index;

// 	i = 0;
// 	index = -1;
//     while (i < pos->count_b)
// 	{
//         if (b[i] > a && b[i] < min_diff)
// 		{
//             min_diff = b[i];
//             index = i;
//         }
// 		i++;
//     }
// 	//  printf("\n");
//     // printf("Pile B = ");
//     //  for (int j = 0;j < pos->count_b ;j++)//TEST
//     //      printf("[%d] ",b[j]);//TEST
   
// 	int o = found_lower(a, b, pos);
//    	if(index == -1 && o != -1)
// 		return (o);
// 	if(a > b[0] && index == -1)
// 		return(1);

// 	// printf("\n&&&&&&& index = %d pos b = %zu &&&&&&&\n",index, pos->count_b);
// 	if (index == pos->count_b - 1)
// 		return (0);
//     return (index + 1);
// }

// int	found_lower(int a, int *b, t_count *pos)
// {
// 	int	i;
// 	int	min_diff = -__INT_MAX__;
// 	int	index;

// 	i = 0;
// 	index = -1;
// 	while (i < pos->count_b)
// 	{
// 		if (b[i] < a && b[i] > min_diff)
// 		{
// 			min_diff = b[i];
// 			index = i;
// 		}
// 		i++;
// 	}
// 	//printf("m a = %d  mindiff =  %d   index = %d  m", a, min_diff, index);
// 	return (index);
// }