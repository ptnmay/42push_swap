/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:34:59 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/22 22:00:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_it(t_stack **ab, t_stack **ba)
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
    printf("pa or pb\n");
}

t_stack *switch_it(t_stack *ab)
{
    t_stack *clone;

    clone = ab->next;
    ab->next = clone->next;
    clone->next = ab;
    printf("sa\n");
    return(clone);
}

t_stack *rotate_it(t_stack *ab)
{
    t_stack *clone;
    t_stack *end;

    clone = ab;
    ab = ab->next;
    end = set_last(ab);
    end->next = clone;
    clone->next = NULL;
    printf("ra\n");
    // printf("\nab in rotate = [%d]\n", ab->numero);
    // printf("ab next in rotate = [%d]\n", ab->next->numero);
    // printf("ab next next in rotate = [%d]\n", ab->next->next->numero);
    //ab->next->next->next = NULL;
    // printf("ab next next next in rotate = [%d]\n", ab->next->next->next->numero);
    return(ab);
}

t_stack *rorotate_it(t_stack *ab)
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
    printf("rra\n");
    return(ab);
}
