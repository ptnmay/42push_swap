/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/27 01:43:21 by psaeyang         ###   ########.fr       */
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
	//int		i;
	int		space;
	t_stack	*a;
	t_stack	*b;
	// int testmin = 0;
	// int testmax = 0;
	// int testminb = 0;
	// int testmaxb = 0;

	//i = 1;
	space = 0;
	a = NULL;
	b = NULL;
	if (ac <= 2)
	{
		ft_putendl_fd("Errorac", 2);
		exit(EXIT_SUCCESS);
	}
	verify_av(av);
	a = set_stack(av);
	verify_doppelganger(a);
	if (verify_sort(a) == 1)
		announce_failure("sort", a);
	space = struct_len(a);
	insert_index(a, space);
	a = zou_sort(a, b, space);
	ft_printf("a -> after sort\n");

	//print_list(a);

	// testmaxb = looking_for_max(b);
	// testminb = looking_for_min(b);
	// ft_printf("max b = [%d]\nmin b = [%d]\n", testmaxb, testminb);
}
