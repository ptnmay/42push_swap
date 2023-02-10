/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/11 00:54:34 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	i = 1;
	a = NULL;
	b = NULL;
	if (ac == 1)
		printf("<= three ac juseyo\n");
	verify_av(av);
	printf("ok\n");
	a = set_stack(av);
	printf("set_stack a = %d\n", a->numero);
	printf("set_stack a next = %d\n", a->next->numero);
	printf("set_stack a next next = %d\n", a->next->next->numero);
	verify_doppelganger(a);
	// while(i < ac)
	// {
	// 	set_stack(ac, av[i], a);
	// 	i++;
	// }
	// a = set_link()

}
