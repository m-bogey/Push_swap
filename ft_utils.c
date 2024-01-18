#include "push_swap.h"

size_t   ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t   ft_strlen_int(int *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int  ft_strcmp(char *s1, char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        *s1++;
        *s2++;
    }
    return (0);
}