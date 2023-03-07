/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:07:45 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/08 02:19:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	value_500_1(t_info *data)
{
	data->chunk = 1;
	data->i = 50;
	data->j = 1;
	data->k = 0;
	data->pos1 = 0;
	data->pos2 = 0;
}

void	if_a_500(t_stack **a, t_stack **b, t_info data)
{
	while (struct_len(*b) != data.chunk * data.i)
	{
		if (struct_len(*a) <= 5)
		{
			if ((*a)->index >= 495)
				break ;
		}
		if ((*a)->index <= data.chunk * data.i && (*a)->index <= 495)
			push_it(a, b, 0);
		else if ((*a)->index <= (data.chunk * data.i) - (data.chunk * 25))
			*a = rotate_it(*a, 1);
		else if ((*a)->index > (data.chunk * data.i) - (data.chunk * 25))
			*a = rorotate_it(*a, 1);
		if (struct_len(*b) > 1 && (*b)->index >= data.k)
		{
			if ((*b)->index <= (data.chunk * data.i) - (data.chunk * 25))
				*b = rotate_it(*b, 0);
		}
	}
}

t_stack	*sort_o_baek(t_stack *a, t_stack *b)
{
	t_info	data;

	value_500_1(&data);
	while (data.chunk <= 10)
	{
		data.k = data.j;
		while (data.j <= data.chunk * data.i)
		{
			if_a_500(&a, &b, data);
			data.j++;
		}
		data.chunk++;
	}
	a = sort_cinco(a, b);
	a = comingback2_a(a, b);
	return (a);
}
