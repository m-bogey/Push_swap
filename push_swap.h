/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:11:54 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 19:11:56 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define TESTINTMIN "-2147483648"
# define TESTINTMAX "2147483647"

typedef struct s_count
{
	size_t		count_a;
	size_t		count_b;
}				t_count;

size_t		ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
int			check_error(int argc, char **argv);
int			*convert_tab_int(int argc, char **argv);
int			*init_sort_tab(int *a, int argc);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t elementCount, size_t elementSize);
int			sa(int *a, int *b, int *c, t_count *pos);
int			sb(int *a, int *b, int *c, t_count *pos);
int			ss(int *a, int *b, int *c, t_count *pos);
int			pa(int *a, int *b, int *c, t_count *pos);
int			pb(int *a, int *b, int *c, t_count *pos);
int			ra(int *a, int *b, int *c, t_count *pos);
int			rb(int *a, int *b, int *c, t_count *pos);
int			rr(int *a, int *b, int *c, t_count *pos);
int			rra(int *a, int *b, int *c, t_count *pos);
int			rrb(int *a, int *b, int *c, t_count *pos);
int			rrr(int *a, int *b, int *c, t_count *pos);
int			first_step(int *a, int *b, int *c, t_count *pos);
int			second_step(int *a, int *b, int *c, t_count *pos);
void		ft_free_exit(int *a, int *b, int *c);

#endif
