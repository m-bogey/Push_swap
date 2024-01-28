#include "push_swap.h"

int    ra(int *a, t_count *pos)
{
    int     temp;
    size_t  i;

    temp = a[0];
    i = 0;
    while (i < pos->count_a)
    {
        a[i] = a[i + 1];
        i++;
    }
    a[i - 1] = temp;
	if(write(1,"ra\n", 3) == -1)
		return (-1);
	pos->compteur++;
	return (0);
}

int    rb(int *b, t_count *pos)
{
    int     temp;
    size_t  i;

    temp = b[0];
    i = 0;
    while (i < pos->count_b)
    {
        b[i] = b[i + 1];
        i++;
    }
    b[i - 1] = temp;
	if(write(1,"rb\n", 3) == -1)
		return (-1);
	pos->compteur++;
	return (0);
}

int    rr(int *a, int *b, t_count *pos)
{
	int     temp;
	size_t  i;

	temp = a[0];
	i = 0;
	while (i < pos->count_a)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i - 1] = temp;
	temp = b[0];
	i = 0;
	while (i < pos->count_b)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i - 1] = temp;
	if(write(1,"rr\n", 3) == -1)
		return (-1);
	pos->compteur++;
	return (0);
}