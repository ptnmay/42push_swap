/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrrrss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 02:06:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/25 02:31:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rr(t_stack **a, t_stack **b)
{
    t_stack *aa;
    t_stack *bb;
    
    aa = rotate_it(*a);
    bb = rotate_it(*b);
    *a = aa;
    *b = bb;
}

void    rrr(t_stack **a, t_list **b)
{
    t_stack *aa;
    t_stack *bb;
    
    aa = rorotate_it(*a);
    bb = rorotate_it(*b);
    *a = aa;
    *b = bb;
}

void    ss(t_stack **a, t_stack **b)
{
    t_stack *aa;
    t_stack *bb;
    
    aa = switch_it(*a);
    bb = switch_it(*b);
    *a = aa;
    *b = bb;
}