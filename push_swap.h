#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>//a enlever
#include <unistd.h>
#include <stdlib.h>

#define TESTINTMIN "-2147483648"
#define TESTINTMAX "2147483647"

typedef struct s_count
{
	size_t		count_a;
	size_t		count_b;
	size_t		compteur;
}				t_count;

size_t		ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
int			check_error(int argc, char **argv);
int			*convert_tab_int(int argc,char **argv);
int			*init_sort_tab(int *a, int argc);
int			sa(int *a, t_count *pos);
int			sb(int *b, t_count *pos);
int			ss(int *a, int *b, t_count *pos);
int			pa(int *a, int *b, t_count *pos);
int			pb(int *a, int *b, t_count *pos);
int			ra(int *a, t_count *pos);
int			rb(int *b, t_count *pos);
int			rr(int *a, int *b, t_count *pos);
int			rra(int *a, t_count *pos);
int			rrb(int *b, t_count *pos);
int			rrr(int *a, int *b, t_count *pos);
int			first_step(int *a, int *b, int *c, t_count *pos);
int 		second_step(int *a, int *b, int *c, t_count *pos);

#endif