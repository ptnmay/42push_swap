/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:11:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/17 04:26:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_tres(t_stack *a)
{
    t_stack *tmp;

    if (a->index > a->next->index && a->index > a->next->next->index)
        a = rotate_it(a);
    if (a->index > a->next->index)
        a = switch_it(a);
    if (a->index < a->next->index && a->index > a->next->next->index || a->next->index > a->next->next->index)
        
    
}

t_stack    *sort_dos(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
    tmp = tmp->next;
    if (a->index > tmp->index)
    {
        a = switch_it(a);
        // tmp->next = a;
        // a->next = NULL;
    }
    // printf("::::::::::::::\n");
    // printf("tmp num --> [%d] a num --> [%d]\n", tmp->numero, a->numero);
    // printf("sa\n");
    return (a);
}

t_stack *zou_sort(t_stack *a, t_stack *b, int space)
{
    (void)b;
    if (space == 2)
        a = sort_dos(a);
    else if (space == 3)
        a = sort_tres(a);
    // else if (space == 5)
    //     sort_cinco();
    return(a);
}