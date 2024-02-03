/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_step.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:41:41 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 18:41:47 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "push_swap.h"

static void		swap_last_a(int *a, int *b, int *c, t_count *pos);

int	first_step(int *a, int *b, int *c, t_count *pos)
{
	size_t	la;
	size_t	n;
	size_t	chk;

	la = pos->count_a;
	n = 0;
	chk = 0.000000053 * (la * la) + 0.03 * (la) + 14.5;
	while (pos->count_b <= la - 3 && pos->count_a > 3)
	{
		if (a[0] <= c[n] && a[0] < c[la - 3])
		{
			pb(a, b, c, pos);
			n++;
		}
		else if (pos->count_a > chk && a[0] <= c[n + chk] && a[0] < c[la - 3])
		{
			pb(a, b, c, pos);
			rb(a, b, c, pos);
			n++;
		}
		else
			ra(a, b, c, pos);
	}
	swap_last_a(a, b, c, pos);
	return (0);
}

static void	swap_last_a(int *a, int *b, int *tab_index, t_count *pos)
{
	if (pos->count_a == 2)
	{
		if (a[0] > a[1])
			sa(a, b, tab_index, pos);
	}
	if (pos->count_a == 3)
	{
		if (a[0] < a[2] && a[2] < a[1])
		{
			sa(a, b, tab_index, pos);
			ra(a, b, tab_index, pos);
		}
		else if (a[2] < a[0] && a[0] < a[1])
			rra(a, b, tab_index, pos);
		else if (a[1] < a[0] && a[0] < a[2])
			sa(a, b, tab_index, pos);
		else if (a[1] < a[2] && a[2] < a[0])
			ra(a, b, tab_index, pos);
		else if (a[2] < a[1] && a[1] < a[0])
		{
			sa(a, b, tab_index, pos);
			rra(a, b, tab_index, pos);
		}
	}
}
