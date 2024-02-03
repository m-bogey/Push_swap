/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbogey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:39:13 by mbogey            #+#    #+#             */
/*   Updated: 2024/02/02 16:39:15 by mbogey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;

	if (argc <= 1)
		return (0);
	if (check_error(argc, argv) == -1)
		return (write(1, "Error\n", 6), 0);
	a = convert_tab_int(argc, argv);
	if (a == NULL)
		return (1);
	a = init_sort_tab(a, argc);
	free(a);
	return (0);
}
