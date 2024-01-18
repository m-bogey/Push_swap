#include "push_swap.h"

static int     ft_atoi(char *str);

int         *convert_tab_int(int argc,char **argv)
{
    int     *a;
    int     i;

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

static int     ft_atoi(char *str)
{
    int nb;
    int i;
    int neg;

    i = 0;
    nb = 0;
    neg = 1;
    
    //TODO : Gerer -2147483648
    if (str[0] == '-')
    {
        neg = -1;
        i++;
    }
    while (str[i])
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}