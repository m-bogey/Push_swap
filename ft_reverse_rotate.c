#include "push_swap.h"

int    rra(int *a, t_count *pos)
{
    size_t  len;
    int     temp;

    len = pos->count_a - 1;
    temp = a[len];
    while (len > 0)
    {
        a[len] = a[len - 1];
        len--;
    }
    a[0] = temp;
	if(write(1,"rra\n", 4) == -1)
		return (-1);
	return (0);
}

int    rrb(int *b, t_count *pos)
{
    size_t  len;
    int     temp;

    len = pos->count_b - 1;
    temp = b[len];
    while (len > 0)
    {
        b[len] = b[len - 1];
        len--;
    }
    b[0] = temp;
	if(write(1,"rrb\n", 4) == -1)
		return (-1);
	return (0);
}

int    rrr(int *a, int *b, t_count *pos)
{
	size_t  len;
	int     temp;

	len = pos->count_a - 1;
	temp = a[len];
	while (len > 0)
	{
		a[len] = a[len - 1];
		len--;
	}
	a[0] = temp;
	len = pos->count_b - 1;
	temp = b[len];
	while (len > 0)
	{
		b[len] = b[len - 1];
		len--;
	}
	b[0] = temp;
	if(write(1,"rrr\n", 4) == -1)
		return (-1);
	return (0);
}