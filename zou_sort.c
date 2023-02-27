/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:11:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/27 17:16:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack    *sort_dos(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
    tmp = tmp->next;
    if (a->index > tmp->index)
        a = switch_it(a);
    return (a);
}

t_stack *sort_tres(t_stack *a)
{
    if ((a->index > a->next->index) && (a->index > a->next->next->index))
        a = rotate_it(a);
    if ((a->index < a->next->index) && (a->index > a->next->next->index || a->next->index > a->next->next->index))
        a = rorotate_it(a);
    if (a->index > a->next->index)
        a = switch_it(a);
    return (a);
}

t_stack *sort_cinco(t_stack *a, t_stack *b)
{
    while(struct_len(a) != 3)
    {
        if (a->index == looking_for_min(a) || a->index == looking_for_min_2nd(a))
            push_it(&a, &b);
        else
            a = rotate_it(a);
    }
    if (b->index < b->next->index)
        b = switch_it(b);
    a = sort_tres(a);
    push_it(&b, &a);
    push_it(&b, &a);
    return (a);
}

t_stack *zou_sort(t_stack *a, t_stack *b, int space)
{
    if (space == 2)
        a = sort_dos(a);
    else if (space == 3)
        a = sort_tres(a);
    else if (space == 5)
        a = sort_cinco(a, b);
    else if (space == 100)
        a = sort_baek(a, b);
    // else if (space == 500)
    //     a = sort_obaek(a, b);
    // else
    //     a = sort_galaxy(a, b);
    return(a);
}