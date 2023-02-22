/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/22 22:09:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *ab)
{
	t_stack *tmp;

	tmp = ab;
	while (tmp != NULL)
	{
		printf("numero = [%d] index = [%d]\n",tmp->numero ,tmp->index);
		tmp = tmp->next;
	}
}

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
	if (verify_sort(a) == 1)
		announce_failure(":::SORTED:::", a);
	space = struct_len(a);
	printf("\n");
	printf(":::len struct = %d :::\n", space);
	printf("\n");
	insert_index(a, space);

	//-->printf before sort
    // printf("num --> [%d] index --> [%d]\n", a->numero, a->index);
    // printf("num --> [%d] index --> [%d]\n", a->next->numero, a->next->index);
	//printf("num --> [%d] index --> [%d]\n", a->next->next->numero, a->next->next->index);
	//printf("num --> [%d] index --> [%d]\n", a->next->next->next->numero, a->next->next->next->index);
	printf("before sort\n");
	print_list(a);
	printf("\n");

	a = zou_sort(a, b, space);

	//a = rorotate_it(a);
	printf("\n::::::::::::::\n");
	print_list(a);
	// while(a)
	// {
	// 	printf("num = [%d] | index = [%d]\n", a->numero, a->index);
	// 	a = a->next;
	// }
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
