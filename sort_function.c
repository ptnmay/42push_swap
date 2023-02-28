/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:34:59 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/01 00:22:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_it(t_stack **ab, t_stack **ba, int mode)
{
    t_stack *tmp;

    if (*ba)
    {
        tmp = *ab;
        *ab = (*ab)->next;
        tmp->next = *ba;
        *ba = tmp;
    }
    else
    {
        *ba = *ab;
        *ab = (*ab)->next;
        (*ba)->next = NULL;
    }
    if (mode == 1)
        write(1, "pa\n", 3);
        // ft_printf("pa\n");
    else if (mode == 0)
        write(1, "pb\n", 3);
        // ft_printf("pb\n");
}

t_stack *switch_it(t_stack *ab, int mode)
{
    t_stack *clone;

    clone = ab->next;
    ab->next = clone->next;
    clone->next = ab;
    if (mode == 1)
        write(1, "sa\n", 3);
    else if (mode == 0)
        write(1, "sb\n", 3);
    return(clone);
}

t_stack *rotate_it(t_stack *ab, int mode)
{
    t_stack *clone;
    t_stack *end;

    clone = ab;
    ab = ab->next;
    end = set_last(ab);
    end->next = clone;
    clone->next = NULL;
    if (mode == 1)
        write(1, "ra\n", 3);
    else if (mode == 0)
        write(1, "rb\n", 3);
    return(ab);
}

t_stack *rorotate_it(t_stack *ab, int mode)
{
    t_stack *clone;
    t_stack *end;

    clone = ab;
    end = set_last(ab);
    while(clone->next->next != NULL)
        clone = clone->next;
    clone->next = NULL;
    end->next = ab;
    ab = end;
    if (mode == 1)
        write(1, "rra\n", 4);
    else if (mode == 0)
        write(1, "rrb\n", 4);
    return(ab);
}
