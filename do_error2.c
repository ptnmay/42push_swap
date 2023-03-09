/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:47:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/09 19:30:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	erase_stack(t_stack **a)
{
	t_stack	*tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		*a = NULL;
		printf("This p --> %p\n", a);
		*a = tmp;
	}
	free(*a);
	*a = NULL;
}

int	verify_sort(t_stack *a)
{
	t_stack	*tmp;

	while (a && a->next)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->numero > tmp->numero)
				return (0);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (1);
}

void	announce_failure(char *str, t_stack *a)
{
	ft_putendl_fd(str, 2);
	erase_stack(&a);
	exit(EXIT_SUCCESS);
}

void	verify_doppelganger(t_stack *a)
{
	t_stack	*tmp;

	while (a && a->next)
	{
		tmp = a->next;
		while (tmp)
		{
			if (tmp->numero == a->numero)
				announce_failure("Error", a);
			tmp = tmp->next;
		}
		a = a->next;
	}
}
