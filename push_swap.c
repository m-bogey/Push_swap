#include "push_swap.h"

int main(int argc, char **argv)
{
    int     *a;

    if (argc <= 1)
        return (0);
    if(check_error(argc, argv) == -1)
        return (write(1,"Error\n",6), 0);
    a = convert_tab_int(argc, argv);
    a = init_sort_tab(a, argc);
    //print a
    printf("Pile A = ");
    for (int i = 0;i < argc - 1;i++)
        printf("[%d] ",a[i]);
    //TODO:faire le programme de trie
    free(a);
    return (0);
}