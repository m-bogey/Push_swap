/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:51:27 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 15:51:32 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigit(char *str);
static int	ft_is_out_int(char *str);
static int	ft_strcmp_int(char *str, size_t len);
static int	ft_is_doublon(char **argv, char *str, int argc, int i);

int	check_error(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_isdigit(argv[i]) == -1)
			return (-1);
		if (ft_is_out_int(argv[i]) == -1)
			return (-1);
		if (ft_is_doublon(argv, argv[i], argc, i) == -1)
			return (-1);
		i++;
	}
	return (1);
}

static int	ft_isdigit(char *str)
{
	size_t	i;

	if ((str[0] < '0' || str[0] > '9') && str[0] != '-')
		return (-1);
	i = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (1);
}

static int	ft_is_out_int(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (len > 11 || (len == 11 && str[0] != '-'))
		return (-1);
	if (len == 11 || len == 10)
	{
		if (ft_strcmp_int(str, len) < 0)
			return (-1);
	}
	return (1);
}

static int	ft_strcmp_int(char *str, size_t len)
{
	int	i;

	i = 0;
	if (len == 11)
	{
		while (TESTINTMIN[i])
		{
			if (TESTINTMIN[i] != str[i])
				return (TESTINTMIN[i] - str[i]);
			i++;
		}
	}
	if (len == 10)
	{
		while (TESTINTMAX[i])
		{
			if (TESTINTMAX[i] != str[i])
				return (TESTINTMAX[i] - str[i]);
			i++;
		}
	}
	return (0);
}

static int	ft_is_doublon(char **argv, char *str, int argc, int i)
{
	int	index;

	index = i + 1;
	while (index < argc)
	{
		if (ft_strcmp(str, argv[index]) == 0)
			return (-1);
		index++;
	}
	return (0);
}
