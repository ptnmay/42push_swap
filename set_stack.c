/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:57:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/09 03:37:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*set_buttom()

t_stack	*make_it_happen(int num)
{
	t_stack	*make;

	make = (t_stack *)malloc(sizeof(t_stack));
	make->numero = num;
	make->next = NULL;
	return(make);
}

t_stack	*set_stack(int ac, char *av, t_stack *a)
{
	char	**rip;
	int		i;
	t_stack	*new;

	new = NULL;
	i = 0;
	rip = ft_split(av, ' ');
	while(i < ac)
	{
		new = make_it_happen(ft_atoi(rip[i]));
		set_buttom(&a, new);
	}
}
