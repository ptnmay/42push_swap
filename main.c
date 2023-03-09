/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/10 00:09:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *ab)
{
	t_stack	*tmp;

	tmp = ab;
	while (tmp != NULL)
	{
		ft_printf("numero = [%d] index = [%d]\n", tmp->numero, tmp->index);
		tmp = tmp->next;
	}
}

void	less_thantwo(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		space;

	space = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		less_thantwo();
	verify_av(av);
	a = set_stack(av);
	verify_doppelganger(a);
	if (verify_sort(a) == 1)
	{
		erase_stack(&a);
		exit(EXIT_SUCCESS);
	}
	space = struct_len(a);
	insert_index(a, space);
	a = zou_sort(a, b, space);
	erase_stack(&a);
	return (0);
}
