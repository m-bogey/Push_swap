/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_tab_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:50:37 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 16:50:40 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi(char *str);

int	*convert_tab_int(int argc, char **argv)
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * argc);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	a[argc - 1] = 0;
	return (a);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static long	ft_long_max_or_min(int signe)
{
	if (signe == -1)
		return (LONG_MIN);
	return (LONG_MAX);
}

static long	ft_strtol(const char *p)
{
	long	nbr;
	int		i;
	int		signe;

	nbr = 0;
	i = 0;
	signe = 1;
	while ((p[i] >= 9 && p[i] <= 13) || p[i] == 32)
		i++;
	if (p[i] == '-' || p[i] == '+')
	{
		if (p[i] == '-')
			signe = -1;
		i++;
	}
	while (ft_isdigit(p[i]))
	{
		if (nbr != ((nbr * 10) + (p[i] - '0')) / 10)
			return (ft_long_max_or_min(signe));
		nbr = (nbr * 10) + (p[i] - '0');
		i++;
	}
	return (nbr * signe);
}

static int	ft_atoi(char *p)
{
	return ((int)ft_strtol(p));
}
