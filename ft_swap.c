#include "push_swap.h"

int    sa(int *a, t_count *pos)
{
    int temp;

    if (pos->count_a >= 2)
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
		if(write(1,"sa\n", 3) == -1)
			return (-1);
		pos->compteur++;
	}
	return (0);
}

int    sb(int *b, t_count *pos)
{
    int     temp;
    
    if (pos->count_b >= 2)
    {
        temp = b[0];
        b[0] = b[1];
        b[1] = temp;
	if(write(1,"sb\n", 3) == -1)
		return (-1);
		pos->compteur++;
	}	
	return (0);
}

int    ss(int *a, int *b, t_count *pos)
{
	int temp;

	if (pos->count_a >= 2 && pos->count_b >= 2) {
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		if (write(1, "ss\n", 3) == -1)
			return (-1);
		pos->compteur++;
	}
	return (0);
}