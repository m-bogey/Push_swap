/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:25:29 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 17:25:35 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((s1 + i) - (s2 + i));
		i++;
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str++ = '\0';
		n--;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*p;
	size_t	count;

	count = elementCount * elementSize;
	if (count != 0 && count / elementSize != elementCount)
		return (NULL);
	p = (void *)malloc(count);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count);
	return (p);
}

void	ft_free_exit(int *a, int *b, int *c)
{
	free(a);
	free(b);
	free(c);
	exit(1);
}
