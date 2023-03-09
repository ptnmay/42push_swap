/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:57:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/09 23:21:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*set_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	set_end(t_stack **a, t_stack *new)
{
	t_stack	*end;

	if (a && new)
	{
		if (!(*a))
			*a = new;
		else
		{
			end = set_last(*a);
			end->next = new;
		}
	}
}

t_stack	*make_it_happen(int num)
{
	t_stack	*make;

	make = NULL;
	make = (t_stack *)malloc(sizeof(t_stack));
	if (!make)
		return (NULL);
	make->numero = num;
	make->next = NULL;
	return (make);
}

t_stack	*set_stack(char **av)
{
	int		i;
	int		j;
	char	**rip;
	t_stack	*new;
	t_stack	*a;

	a = NULL;
	i = 1;
	while (av[i])
	{
		j = 0;
		rip = ft_split(av[i], ' ');
		while (rip[j])
		{
			new = make_it_happen(ft_atoi(rip[j], rip));
			set_end(&a, new);
			j++;
		}
		erase_split(rip);
		i++;
	}
	return (a);
}
