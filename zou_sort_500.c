/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:07:45 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/06 23:02:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_o_baek(t_stack *a, t_stack *b)
{
	int i;
	int j;
	int k;
	int chunk;

	chunk = 1;
	i = 50;
	j = 1;
	while (chunk <= 10)
	{
		k = j;
		while (j <= chunk * i)
		{
			while (struct_len(b) != chunk * i)
			{
				if (struct_len(a) <= 5)
				{
					if (a->index >= 495)
						break ;
				}
				if (a->index <= chunk * i && a->index <= 495)
					push_it(&a, &b, 0);
				else if (a->index <= (chunk * i) - (chunk * 25))
					a = rotate_it(a, 1);
				else if (a->index > (chunk * i) - (chunk * 25))
					a = rorotate_it(a, 1);
				if (struct_len(b) > 1 && b->index >= k)
				{
					if (b->index <= (chunk * i) - (chunk * 25))
						b = rotate_it(b, 0);
				}
			}
			j++;
		}
		chunk++;
	}
	a = sort_cinco(a, b);
	// print_list(a);
	// printf("=================================\n");
	// print_list(b);
	// exit(0);
	a = comingback2_a(a, b);
    return(a);
}