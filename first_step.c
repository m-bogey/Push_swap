#include "push_swap.h"

static int  check_lower_median(int *c, int nb, int half_len_a);
static void move_b(int a, int *b, t_count *pos);
static size_t	check_sup(int a, int *b, t_count *pos);
static size_t	check_lower(int a, int *b, t_count *pos);

int    first_step(int *a, int *b, int *c, int argc)
{
	size_t		half_len_a;
	t_count		pos;

	pos.count_a = argc - 1;
	pos.count_b = 0;
	half_len_a = pos.count_a / 2;

	while (pos.count_b != half_len_a)
    {
		if (check_lower_median(c, a[0], half_len_a) == 1)
		{
			move_b(a[0], b, &pos);
			pb(a, b, &pos);
		}
		ra(a, &pos);
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
	size_t	nb_sup;
	size_t	nb_lower;

	nb_sup = check_sup(a, b, pos);
	nb_lower = check_lower(a, b, pos);
	printf("a[0] = %d pos sup = %zu  pos inf = %zu\n",a ,nb_sup, nb_lower);
	int i = 0;
	while(i < pos->count_b)
	{
		printf("%d", b[i]);
		i++;
	}
	printf("\n");
	if (nb_sup > 0) {
		rb(b, pos);
		while (nb_sup > 0)
		{
			rb(b, pos);
			nb_sup--;
		}
	}
//	if (nb_lower > 0 && nb_sup != 0)
//	{
//		while(nb_lower > 0)
//		{
//			rb(b, pos);
//			nb_lower--;
//		}
//	}
}

static size_t	check_sup(int a, int *b, t_count *pos)
{
	size_t	i;
	size_t	index;
	int		result;

	i = 0;
	index = 0;
	result = -2147483648;
	while(i < pos->count_b)
	{
		if (b[i] > a && (result == -2147483648 || b[i] < result))
		{
			result = b[i];
			index = i;
		}
		i++;
	}
	return (index);
}

static size_t	check_lower(int a, int *b, t_count *pos)
{
	size_t	i;
	size_t	index;
	int		result;

	i = 0;
	index = 0;
	result = 2147483647;
	while(i < pos->count_b)
	{
		if (b[i] < a && (result == 2147483647 || b[i] > result))
		{
			result = b[i];
			index = i;
		}
		i++;
	}
	return (index);
}