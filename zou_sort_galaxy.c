/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_galaxy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:34:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/07 21:54:51 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_galaxy(t_stack *a, t_stack *b)
{
	int	min;

	while (struct_len(a) != 0)
	{
		min = looking_for_min(a);
		while (a->index != min)
			a = rotate_it(a, 1);
		push_it(&a, &b, 0);
	}

	while (struct_len(b) != 0)
		push_it(&b, &a, 1);
	return (a);
}