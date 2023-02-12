/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:08:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/13 02:57:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int struct_len(t_stack *a)
{
    int len;

    len = 0;
    while(a)
    {
        len++;
        a = a->next;
    }
    return(len);
}

// void    insert_index(t_stack *a, int space)
// {
//     int i;

//     i = 0;
// }