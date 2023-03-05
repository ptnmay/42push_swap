/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looking_for_sth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:18:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/05 20:58:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	looking_for_position(int index, t_stack *b)
{
	int location;

	location = 0;
	while (b)
	{
		if (b->index == index)
			break ;
		location++;
		b = b->next;
	}
	return (location);
}

int looking_for_max_2nd(t_stack *a)
{
	t_stack *tmp;
	int     max;
	int     secondmax;

	tmp = a;
	max = looking_for_max(a);
	secondmax = looking_for_min(a);
	while (tmp->next)
	{
		if (tmp->index < max && tmp->index > secondmax)
			secondmax = tmp->index;
		tmp = tmp->next;
	}
	return (secondmax);
}

int looking_for_min_2nd(t_stack *a)
{
	t_stack *tmp;
	int     min;
	int     secondmin;

	tmp = a;
	min = looking_for_min(a);
	secondmin = looking_for_max(a);
	while (tmp)
	{
		if (tmp->index < secondmin && tmp->index > min)
			secondmin = tmp->index;
		tmp = tmp->next;
	}
	return (secondmin);
}

int	looking_for_max(t_stack *a)
{
	t_stack	*tmp;
	int		maximun;

	tmp = a;
	maximun = tmp->index;
	while (tmp->next)
	{
		if (maximun < tmp->next->index)
			maximun = tmp->next->index;
		tmp = tmp->next;
	}
	return (maximun);
}

int	looking_for_min(t_stack *a)
{
	t_stack	*tmp;
	int		mininum;

	tmp = a;
	mininum = tmp->index;
	while(tmp->next)
	{
		if (mininum > tmp->next->index)
			mininum = tmp->next->index;
		tmp = tmp->next;
	}
	return (mininum);
}