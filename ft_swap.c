/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:31:33 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 16:31:35 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(int *a, int *b, int *c, t_count *pos)
{
	int	temp;

	if (pos->count_a >= 2)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		if (write(1, "sa\n", 3) == -1)
			ft_free_exit(a, b, c);
	}
	return (0);
}

int	sb(int *a, int *b, int *c, t_count *pos)
{
	int	temp;

	if (pos->count_b >= 2)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		if (write(1, "sb\n", 3) == -1)
			ft_free_exit(a, b, c);
	}
	return (0);
}

int	ss(int *a, int *b, int *c, t_count *pos)
{
	int	temp;

	if (pos->count_a >= 2 && pos->count_b >= 2)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		if (write(1, "ss\n", 3) == -1)
			ft_free_exit(a, b, c);
	}
	return (0);
}
