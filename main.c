/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/04 19:49:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *ab)
{
	t_stack *tmp;

	tmp = ab;
	while (tmp != NULL)
	{
		ft_printf("numero = [%d] index = [%d]\n",tmp->numero ,tmp->index);
		tmp = tmp->next;
	}
}

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		space;

	space = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_SUCCESS);
	}
	verify_av(av);
	a = set_stack(av);
	verify_doppelganger(a);
	if (verify_sort(a) == 1)
	{
		erase_stack(a);
		exit(EXIT_SUCCESS);
	}
		// announce_failure("sort", a);
	space = struct_len(a);
	insert_index(a, space);
	// ft_printf("a -> before sort\n");
	// print_list(a);
	// printf("..........................\n");
	a = zou_sort(a, b, space);
	// ft_printf("a -> after sort\n");
	// print_list(a);
	// printf("--------------------");
	// print_list(b);

	return (0);
}
