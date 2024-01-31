#include "push_swap.h"

static void    sort_tab(int *a, int *b, int *c, int argc);
static int     *init_c(int *a, int argc);

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
    // printf("Pile C = ");
    // for (int ju = 0;ju < argc -1 ;ju++)//TEST
    //     printf("[%d] ",c[ju]);//TEST
    // printf("\n");
    //--------------------------------------------------
    sort_tab(a, b, c, argc);
    // ---------- print b ------------------------------
    // printf("Pile B = ");
    //  for (int j = 0;j < argc -1 ;j++)//TEST
    //      printf("[%d] ",b[j]);//TEST
    // printf("\n");
    //---------------------------------------------------
    free(b);
    free(c);
    return (a);
}

static void    sort_tab(int *a, int *b, int *c, int argc)
{
    t_count		pos;

	pos.count_a = argc - 1;
	pos.count_b = 0;
	pos.compteur = 0;
	first_step(a, b, c, &pos);
   	second_step(a, b, c, &pos);

    printf("\n--- compteur = %zu ---\n", pos.compteur);
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
    while (i < argc - 1)
    {
        c[i] = a[i];
        i++;
    }
    c[i] = 0;
    i = 0;
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
    return (c);
}
