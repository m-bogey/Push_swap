#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>//a enlever
#include <unistd.h>
#include <stdlib.h>

#define TESTINTMIN "-2147483648"
#define TESTINTMAX "2147483647"

size_t      ft_strlen(char *str);
size_t      ft_strlen_int(int *str);
int         ft_strcmp(char *s1, char *s2);
int         check_error(int argc, char **argv);
int         *convert_tab_int(int argc,char **argv);
int         *sort_tab(int *a, int argc);
void        sa(int *a);
void        sb(int *b);
void        ss(int *a, int *b);
void        pa(int *a, int *b);
void        pb(int *a, int *b);
void        ra(int *a);
void        rb(int *b);
void        rr(int *a, int *b);
void        rra(int *a);
void        rrb(int *b);
void        rrr(int *a, int *b);

#endif