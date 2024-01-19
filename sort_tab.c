#include "push_swap.h"

static void    sort_tab(int *a, int *b, int *c, int argc);
static int     *init_c(int *a, int argc);
static int  check_lower_median(int *c, int nb, int half_len_a);

int     *init_sort_tab(int *a, int argc)
{
    int     *b;
    int     *c;

    b = calloc(argc, sizeof(int)); // ft_calloc
    if (b == NULL)
        return (NULL);
    c = init_c(a, argc);
    if (c == NULL)
        return (NULL);
    // ---------- print c ------------------------------
    printf("Pile C = ");
    for (int ju = 0;ju < argc -1 ;ju++)//TEST
        printf("[%d] ",c[ju]);//TEST
    printf("\n");
    //--------------------------------------------------
    sort_tab(a, b, c, argc);
    // ---------- print b ------------------------------
    printf("Pile B = ");
     for (int j = 0;j < argc -1 ;j++)//TEST
         printf("[%d] ",b[j]);//TEST
    printf("\n");
    //---------------------------------------------------
    free(b);
    free(c);
    return (a);
}

static void    sort_tab(int *a, int *b, int *c, int argc)
{
    int     half_len_a;

	count	pos;

	pos.count_a = argc - 1;
	pos.count_b = 0;
    half_len_a = pos.count_a / 2;
    //printf("%d",check_lower_median(c,a[1],half_len_a));
    while (ft_strlen_int(b) != half_len_a)
    {
        if (check_lower_median(c, a[0], half_len_a) == 1)
            {
                pb(a, b, &pos);
				rra(a, &pos);
                //ft trie b
            }
        ra(a, &pos);
    }
    //printf("yy %d %d yy\n", half_len_a, ft_strlen_int(b));
}

static int    *init_c(int *a, int argc)
{
    int    *c;
    size_t  i;
    size_t  j;
    int     temp;

    i = 0;
    c = malloc(sizeof(int) * argc);
    if (c == NULL)
        return (NULL);
    while (a[i])
    {
        c[i] = a[i];
        i++;
    }
    c[i] = 0;
    i = 0;
    while (c[i])
    {
        j = 0;
        while (c[j])
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
    return (c);
}

static int  check_lower_median(int *c, int nb, int half_len_a)
{
    int     i;

    i = 0;
    while (i < half_len_a)
    {
        if (nb == c[i])
            return (1);
        i++;
    }
    return (0);
}
