/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:34:59 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/17 04:27:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack    *switch_it(t_stack *ab)
{
    t_stack *clone;
    
    clone = ab->next;
    ab->next = clone->next;
    clone->next = ab;

    return(clone);
}

t_stack    *rotate_it(t_stack *ab)
{
    t_stack *clone;
    t_stack *end;
    
    end = set_last(ab);
   
    return(ab);
}