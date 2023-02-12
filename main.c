/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/13 03:01:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int		i;
	int		space;
	t_stack	*a;
	t_stack	*b;
	
	i = 1;
	space = 0;
	a = NULL;
	b = NULL;
	if (ac == 1)
		printf("<= three ac juseyo\n");
	verify_av(av);
	printf(">>>go set stack<<<\n");
	printf("\n");
	a = set_stack(av);
	// printf("set_stack a = %d\n", a->numero);
	// printf("set_stack a next = %d\n", a->next->numero);
	// printf("set_stack a next next = %d\n", a->next->next->numero);
	// printf("\n");
	verify_doppelganger(a);
	verify_sort(a);
	space = struct_len(a);
	printf("\n");
	printf(":::len struct = %d :::\n", space);
	printf("\n");
	//insert_index(a, space);

	
	// while(i < ac)
	// {
	// 	set_stack(ac, av[i], a);
	// 	i++;
	// }
	// a = set_link()

}
