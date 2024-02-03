/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:23:36 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 16:23:38 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		move_down(int *tab, size_t compt);
static void		move_up(int *tab, size_t compt);

int	pa(int *a, int *b, int *c, t_count *pos)
{
	if (pos->count_b > 0)
	{
		move_down(a, pos->count_a);
		a[0] = b[0];
		move_up(b, pos->count_b);
		pos->count_a++;
		pos->count_b--;
		if (write(1, "pa\n", 3) == -1)
			ft_free_exit(a, b, c);
	}
	return (0);
}

int	pb(int *a, int *b, int *c, t_count *pos)
{
	if (pos->count_a > 0)
	{
		move_down(b, pos->count_b);
		b[0] = a[0];
		move_up(a, pos->count_a);
		pos->count_a--;
		pos->count_b++;
		if (write(1, "pb\n", 3) == -1)
			ft_free_exit(a, b, c);
	}
	return (0);
}

static void	move_down(int *tab, size_t compt)
{
	while (compt > 0)
	{
		tab[compt] = tab[compt - 1];
		compt--;
	}
}

static void	move_up(int *tab, size_t compt)
{
	size_t	i;

	i = 0;
	while (i < compt)
	{
		tab[i] = tab[i + 1];
		i++;
	}
}
