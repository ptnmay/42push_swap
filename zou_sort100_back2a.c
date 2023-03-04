/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort100_back2a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:28:56 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/04 20:05:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*loop_rrb(t_stack *b, int pos)
{
	while ((struct_len(b) - pos) > 0)
	{
		b = rorotate_it(b, 0);
		pos++;
	}
	return (b);
}

t_stack	*loop_rb(t_stack *b, int pos)
{
	while (pos > 0)
	{
		b = rotate_it(b, 0);
		pos--;
	}
	return (b);
}

t_stack *comingback2a(t_stack *a, t_stack *b)
{
	int posmax;
	int	posmax2;

		
	int sth = 15;

	while (sth > 0)
	{
		posmax = looking_for_position(looking_for_max(b), b);
		posmax2 = looking_for_position(looking_for_max_2nd(b), b);
		if (sth > struct_len(b) / 2)
		{
			while (b->index != looking_for_max(b))
			{
				if (b->index == looking_for_max_2nd(b))
					push_it(&b, &a, 1);
				else
					b = rorotate_it(b, 0);
			}
			push_it(&b, &a, 1);
			if (a->index > a->next->index)
			a = switch_it(a, 1);
		}
		else
		{
			while (b->index != looking_for_max(b))
			{
				if (b->index == looking_for_max_2nd(b))
					push_it(&b, &a, 1);
				else
					b = rotate_it(b, 0);
			}
			push_it(&b, &a, 1);
			if (a->index > a->next->index)
			a = switch_it(a, 1);
		}
		//wrong little bit
		// posmax = looking_for_position(looking_for_max(b), b);
		// posmax2 = looking_for_position(looking_for_max_2nd(b), b);
		// if (posmax <= struct_len(b) / 2)
		// 	b = loop_rb(b, posmax);
		// else if (posmax > struct_len(b) / 2)
		// 	b = loop_rrb(b, posmax);
		// else if (posmax2 < struct_len(b) / 2)
		// 	b = loop_rb(b, posmax2);
		// else if (posmax2 > struct_len(b) / 2)
		// 	b = loop_rrb(b , posmax2);
		// push_it(&b, &a, 1);
		// if (a->index > a->next->index)
		// {
		// 		a = switch_it(a, 1);
		// }
		// if (a->index > a->next->index)
		// 	a = switch_it(a, 1);
		print_list(a);
		sleep(3);
		sth--;
	}
	
	int four = 4;
	while (four > 0)
	{
		sth = 20;
		while (sth > 0)
		{
			if (sth > struct_len(b) / 2)
		{
			while (b->index != looking_for_max(b))
			{
				if (b->index == looking_for_max_2nd(b))
					push_it(&b, &a, 1);
				else
					b = rorotate_it(b, 0);
			}
			push_it(&b, &a, 1);
		}
		else
		{
			while (b->index != looking_for_max(b))
			{
				if (b->index == looking_for_max_2nd(b))
					push_it(&b, &a, 1);
				else
					b = rotate_it(b, 0);
			}
			push_it(&b, &a, 1);
		}
			// posmax = looking_for_position(looking_for_max(b), b);
			// posmax2 = looking_for_position(looking_for_max_2nd(b), b);
			// if (posmax < struct_len(b) / 2)
			// 	b = loop_rb(b, posmax);
			// else if (posmax > struct_len(b) / 2)
			// 	b = loop_rrb(b, posmax);
			// else if (posmax2 < struct_len(b) / 2)
			// 	b = loop_rb(b, posmax2);
			// else if (posmax2 > struct_len(b) / 2)
			// 	b = loop_rrb(b , posmax2);
			// push_it(&b, &a, 1);
			// if (a->index > a->next->index)
			// 	a = switch_it(a, 1);
			sth--;
		}
		four--;
	}
	return (a);
}