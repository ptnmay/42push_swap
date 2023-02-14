/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/14 15:28:55 by psaeyang         ###   ########.fr       */
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
	printf("\n>>>go set stack<<<\n");
	printf("\n");
	a = set_stack(av);
	//printf("numero == %d\n", a->next->numero);

	//exit(0);
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
	insert_index(a, space);
	zou_sort(a, b, space);
	// printf("index a[0]= %d\n", a[0].index);
	// printf("index a[1]= %d\n", a[1].index);
	// printf("index a[2]= %d\n", a[2].index);
	// printf("index a[3]= %d\n", a[3].index);
	//printf("index a[4]= %d\n", a[4].index);
	// while(a)
	// {
	// 	printf("%d\n", a->index);
	// 	a = a->next;
	// }
	// exit(0);


	
	// while(i < ac)
	// {
	// 	set_stack(ac, av[i], a);
	// 	i++;
	// }
	// a = set_link()

}
