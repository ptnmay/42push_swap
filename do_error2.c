/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:47:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/13 03:08:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	erase_stack(t_stack *a)
{
	t_stack *tmp;

	while(a)
	{
		tmp = a->next;
		a = a->next;
		free(a);
	}
}

int	verify_sort(t_stack *a)
{
	t_stack	*tmp;

	while(a && a->next)
	{
		tmp = a->next;
		while(tmp)
		{
			if (a->numero > tmp->numero)
			{
				printf(">>>>go sort>>>>\n");
				return(0);
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
	return(1);
	printf("===already sort====\n");
}

void	announce_failure(char *str, t_stack *a)
{
	printf("%s\n", str);
	erase_stack(a);
	exit(EXIT_SUCCESS);
}

void	verify_doppelganger(t_stack *a)
{
	t_stack	*tmp;

	while(a && a->next)
	{
		tmp = a->next;
		while(tmp)
		{
			if (tmp->numero == a->numero)
				announce_failure("doppelganger number", a);
			tmp = tmp->next;
		}
		a = a->next;
	}
}
