#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>//a enlever
#include <unistd.h>
#include <stdlib.h>

#define TESTINTMIN "-2147483648"
#define TESTINTMAX "2147483647"

typedef struct count
{
	size_t		count_a;
	size_t		count_b;
}				count;

size_t      ft_strlen(char *str);
size_t      ft_strlen_int(int *str);
int         ft_strcmp(char *s1, char *s2);
int         check_error(int argc, char **argv);
int         *convert_tab_int(int argc,char **argv);
int         *init_sort_tab(int *a, int argc);
void        sa(int *a, count *pos);
void        sb(int *b, count *pos);
void        ss(int *a, int *b, count *pos);
void        pa(int *a, int *b, count *pos);
void        pb(int *a, int *b, count *pos);
void        ra(int *a, count *pos);
void        rb(int *b, count *pos);
void        rr(int *a, int *b, count *pos);
void        rra(int *a, count *pos);
void        rrb(int *b, count *pos);
void        rrr(int *a, int *b, count *pos);

#endif