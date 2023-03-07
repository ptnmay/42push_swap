/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/08 02:48:34 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	value_100_1(t_info *data)
{
	data->chunk = 1;
	data->i = 20;
	data->j = 1;
	data->k = 0;
	data->pos1 = 0;
	data->pos2 = 0;
}

void	else_a_100(t_stack **a, t_info data)
{
	if ((*a)->index <= (data.chunk * data.i) - 10)
		data.pos1 = looking_for_position((*a)->index, *a);
	else if ((*a)->index > (data.chunk * data.i) - 10)
		data.pos2 = looking_for_position((*a)->index, *a);
	if (data.pos1 > data.pos2)
		*a = rotate_it(*a, 1);
	else
		*a = rorotate_it(*a, 1);
}

void	if_a_100(t_stack **a, t_stack **b, t_info data)
{
	while (struct_len(*b) != data.chunk * data.i)
	{
		if (struct_len(*a) <= 5)
		{
			if ((*a)->index >= 95)
				break ;
		}
		if ((*a)->index <= (data.chunk * data.i) && (*a)->index <= 95)
			push_it(a, b, 0);
		else
			else_a_100(a, data);
		if (struct_len(*b) > 1 && (*b)->index >= data.k)
		{
			if ((*b)->index <= (data.chunk * data.i) - 10)
				*b = rotate_it(*b, 0);
		}
	}
}

t_stack	*sort_baek(t_stack *a, t_stack *b)
{
	t_info	data;

	value_100_1(&data);
	while (data.chunk <= 5)
	{
		data.k = data.j;
		while (data.j <= (data.chunk * data.i))
		{
			if_a_100(&a, &b, data);
			data.j++;
		}
		data.chunk++;
	}
	a = sort_cinco(a, b);
	a = comingback2a(a, b);
	return (a);
}
