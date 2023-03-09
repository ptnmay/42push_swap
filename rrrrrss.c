/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrrrss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 02:06:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/09 23:21:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*aa;
	t_stack	*bb;

	aa = rotate_it(*a, 1);
	bb = rotate_it(*b, 0);
	*a = aa;
	*b = bb;
}

void	rrr(t_stack **a, t_list **b)
{
	t_stack	*aa;
	t_stack	*bb;

	aa = rorotate_it(*a, 1);
	bb = rorotate_it(*b, 0);
	*a = aa;
	*b = bb;
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*aa;
	t_stack	*bb;

	aa = switch_it(*a, 1);
	bb = switch_it(*b, 0);
	*a = aa;
	*b = bb;
}
