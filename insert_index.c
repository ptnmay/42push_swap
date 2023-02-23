/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:08:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/24 03:44:21 by psaeyang         ###   ########.fr       */
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

int     inspection_index(t_stack *a, int tmp, int space)
{
    int i;
    int calculation;
    t_stack *c;

    i = 0;
    calculation = 1;
    c = a;
    // while(i <= space && a)
    // {
    //     if (tmp > a->numero)
    //     {

    //         calculation++;
    //     }
    //     a = a->next;
    //     i++;
    //     //printf("i == %d\n", i);
    // }
    // printf("tmp --> [%d] index --> [%d]\n", tmp, calculation);
    // return(calculation);
    while(i <= space && c)
    {
        //printf("num in --> [%d]\n", c->numero);
        if (tmp > c->numero)
            calculation++;
        c = c->next;
        i++;
    }
    return(calculation);
}

void    insert_index(t_stack *a, int space)
{
    t_stack *tmp;
    int     i;

    i = 0;
    tmp = a;
    while(i < space && tmp)
    {
        tmp->index = inspection_index(a, tmp->numero, space);
        tmp = tmp->next;
        i++;
    }
    // if (verify_sort == 0)
    // {
        // while(i < space)
        // {
        //     a[i].index = inspection_index(a, &a[i], space);
            //printf("ai = %d\n", ai.numero);
            //printf("a[%d] = %d\n", i, a[i].numero);
            // printf("--------------------\n");
        //     i++;
        // }
    // }
    // announce_failure("")
}