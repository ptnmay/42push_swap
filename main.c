/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/02 03:10:34 by psaeyang         ###   ########.fr       */
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
		ft_putendl_fd("Errorac", 2);
		exit(EXIT_SUCCESS);
	}
	verify_av(av);
	a = set_stack(av);
	//ft_printf("len a == %d\n", struct_len(a));
	verify_doppelganger(a);
	if (verify_sort(a) == 1)
		announce_failure("sort", a);
	space = struct_len(a);
	insert_index(a, space);
	a = zou_sort(a, b, space);
	ft_printf("a -> after sort\n");
	print_list(a);
	return (0);
}
