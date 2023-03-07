/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort500_back2a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 05:22:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/08 02:50:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *comingback2_a(t_stack *a, t_stack *b)
{
	int posmax;
	int	posmax2;
		
	int sth = 45;

	while (sth > 0)
	{
		posmax = looking_for_position(looking_for_max(b), b);
		posmax2 = looking_for_position(looking_for_max_2nd(b), b);
		if (posmax <= struct_len(b) / 2)
			b = loop_rb(b, posmax);
		else if (posmax >= struct_len(b) / 2)
			b = loop_rrb(b, posmax);
		else if (posmax2 <= struct_len(b) / 2)
			b = loop_rb(b, posmax2);
		else if (posmax2 >= struct_len(b) / 2)
			b = loop_rrb(b , posmax2);
		push_it(&b, &a, 1);
		if (a->index > a->next->index)
				a = switch_it(a, 1);
		sth--;
	}
	
	int four = 9;
	while (four > 0)
	{
		sth = 50;
		while (sth > 0)
		{
			posmax = looking_for_position(looking_for_max(b), b);
			posmax2 = looking_for_position(looking_for_max_2nd(b), b);
			if (posmax <= struct_len(b) / 2)
				b = loop_rb(b, posmax);
			else if (posmax >= struct_len(b) / 2)
				b = loop_rrb(b, posmax);
			else if (posmax2 <= struct_len(b) / 2)
				b = loop_rb(b, posmax2);
			else if (posmax2 >= struct_len(b) / 2)
				b = loop_rrb(b , posmax2);
			push_it(&b, &a, 1);
			if (a->index > a->next->index)
				a = switch_it(a, 1);
			sth--;
		}
		four--;
	}
	return (a);
}