#include "push_swap.h"

size_t   ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int  ft_strcmp(char *s1, char *s2)
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