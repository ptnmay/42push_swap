/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort500_back2a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 05:22:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/08 16:22:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	loop_to_a2_500(t_stack *a, t_stack *b, int four)
{
	int	sth;

	while (four > 0)
	{
		sth = 50;
		while (sth > 0)
		{
			b = loop_to_a(b);
			push_it(&b, &a, 1);
			if (a->index > a->next->index)
				a = switch_it(a, 1);
			sth--;
		}
		four--;
	}
}

t_stack	*comingback2_a(t_stack *a, t_stack *b)
{
	int	posmax;
	int	posmax2;
	int	four;		
	int	sth;

	sth = 45;
	while (sth > 0)
	{
		b = loop_to_a(b);
		push_it(&b, &a, 1);
		if (a->index > a->next->index)
				a = switch_it(a, 1);
		sth--;
	}
	four = 9;
	loop_to_a2_500(a, b, four);
	return (a);
}
