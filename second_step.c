/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_step.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:03:39 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 19:03:42 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		found_one(int a, int b, int *tab_index, t_count *pos);
void	rb_or_rrb(int *a, int *b, int *tab_index, t_count *pos);
size_t	found_i(int *a, int *tab_index, t_count *pos);
size_t	found_j(t_count *pos, int *b, int *tab_index, size_t i);

int	second_step(int *a, int *b, int *tab_index, t_count *pos)
{
	int		index_dif;

	while (pos->count_b > 0)
	{
		index_dif = found_one(a[0], b[0], tab_index, pos);
		if (b[0] < a[0] && index_dif == 1)
			pa(a, b, tab_index, pos);
		else if (a[pos->count_a - 1] > b[0])
			rb_or_rrb(a, b, tab_index, pos);
	}
	return (0);
}

int	found_one(int a, int b, int *tab_index, t_count *pos)
{
	size_t	len_tab;
	size_t	i;
	size_t	index_b;

	len_tab = pos->count_a + pos->count_b;
	i = 0;
	while (i < len_tab)
	{
		if (tab_index[i] == b)
			index_b = i;
		i++;
	}
	if (tab_index[index_b + 1] == a && index_b + 1 <= len_tab)
		return (1);
	return (0);
}

void	rb_or_rrb(int *a, int *b, int *tab_index, t_count *pos)
{
	size_t	i;
	size_t	j;

	i = found_i(a, tab_index, pos);
	j = found_j(pos, b, tab_index, i);
	if (j < pos->count_b / 2)
	{
		while (j > 0)
		{
			rb(a, b, tab_index, pos);
			j--;
		}
	}
	else
	{
		while (pos->count_b - j > 0)
		{
			rrb(a, b, tab_index, pos);
			j++;
		}
	}
}

size_t	found_i(int *a, int *tab_index, t_count *pos)
{
	size_t	i;

	i = 0;
	while (i < pos->count_a + pos->count_b)
	{
		if (a[0] == tab_index[i])
			break ;
		i++;
	}
	return (i);
}

size_t	found_j(t_count *pos, int *b, int *tab_index, size_t i)
{
	size_t	j;

	j = 0;
	while (j < pos->count_b)
	{
		if (b[j] == tab_index[i - 1])
			break ;
		j++;
	}
	return (j);
}
