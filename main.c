/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/09 03:27:24 by psaeyang         ###   ########.fr       */
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
	if (ac <= 2)
		printf("<= three ac juseyo");
	verify_av(av);
	while(i < ac)
	{
		set_stack(ac, av[i], &a);
		i++;
	}
	//verify_dupnum(av);
	//a = set_link()

}
