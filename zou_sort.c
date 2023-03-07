/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:11:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/07 21:43:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_dos(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	tmp = tmp->next;
	if (a->index > tmp->index)
		a = switch_it(a, 1);
	return (a);
}

t_stack	*sort_tres(t_stack *a)
{
	if ((a->index > a->next->index) && (a->index > a->next->next->index))
		a = rotate_it(a, 1);
	if ((a->index < a->next->index) && (a->index > a->next->next->index || \
	a->next->index > a->next->next->index))
		a = rorotate_it(a, 1);
	if (a->index > a->next->index)
		a = switch_it(a, 1);
	return (a);
}

t_stack	*sort_cinco(t_stack *a, t_stack *b)
{
	int	min;
	int	min2;

	min = looking_for_min(a);
	min2 = looking_for_min_2nd(a);
	while (struct_len(a) != 3)
	{
		if (a->index == min || a->index == min2)
			push_it(&a, &b, 0);
		else
			a = rotate_it(a, 1);
	}
	if (b->index < b->next->index)
		b = switch_it(b, 0);
	a = sort_tres(a);
	push_it(&b, &a, 1);
	push_it(&b, &a, 1);
	return (a);
}

t_stack	*zou_sort(t_stack *a, t_stack *b, int space)
{
	if (space == 2)
		a = sort_dos(a);
	else if (space == 3)
		a = sort_tres(a);
	else if (space == 5)
		a = sort_cinco(a, b);
	else if (space == 100)
		a = sort_baek(a, b);
	else if (space == 500)
		a = sort_o_baek(a, b);
	else
		a = sort_galaxy(a, b);
	return (a);
}
