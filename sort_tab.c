/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:23:28 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 17:23:30 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_tab(int *a, int *b, int *c, int argc);
static int	*init_c(int *a, int argc);
static void	sort_c(int argc, int *c, int i, int temp);
static int	check_order(int *a, t_count *pos);

int	*init_sort_tab(int *a, int argc)
{
	int	*b;
	int	*c;

	b = ft_calloc(argc, sizeof(int));
	if (b == NULL)
	{
		free(a);
		return (NULL);
	}
	c = init_c(a, argc);
	if (c == NULL)
	{
		free(a);
		free(b);
		return (NULL);
	}
	sort_tab(a, b, c, argc);
	free(b);
	free(c);
	return (a);
}

static void	sort_tab(int *a, int *b, int *c, int argc)
{
	t_count	pos;

	pos.count_a = argc - 1;
	pos.count_b = 0;
	if (check_order(a, &pos) == 1)
		return ;
	first_step(a, b, c, &pos);
	second_step(a, b, c, &pos);
}

static int	*init_c(int *a, int argc)
{
	int		*c;
	int		i;
	int		temp;

	temp = 0;
	i = 0;
	c = malloc(sizeof(int) * argc);
	if (c == NULL)
		return (NULL);
	while (i < argc - 1)
	{
		c[i] = a[i];
		i++;
	}
	c[i] = 0;
	i = 0;
	sort_c(argc, c, i, temp);
	return (c);
}

static void	sort_c(int argc, int *c, int i, int temp)
{
	int	j;

	j = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if ((c[j] < c[i]) && j > i)
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
				i = 0;
			}
			j++;
		}
		i++;
	}
}

static int	check_order(int *a, t_count *pos)
{
	size_t	i;

	i = 0;
	while (i < pos->count_a - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
