/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:11:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/15 04:06:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_tres(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
}

void    sort_dos(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
    tmp = tmp->next;
    if (a->index > tmp->index)
    {
        tmp->next = a;
        a->next = NULL;
    }
    printf("::::::::::::::\n");
    printf("tmp num --> [%d] a num --> [%d]\n", tmp->numero, a->numero);
    printf("sa\n");
}

void    zou_sort(t_stack *a, t_stack *b, int space)
{
    if (space == 2)
        sort_dos(a);
    (void)b;
    // else if (space == 3)
    //     sort_tres();
    // else if (space == 5)
    //     sort_cinco();
}