/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/01 05:03:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_baek(t_stack *a, t_stack *b)
{
    int i;
    int j;
    int chunk;
    int halfway;

    i = 1;
    j = 1;
    chunk = struct_len(a) / 5;
    halfway = 10;
    while (i <= 5)
    {
        while (j <= chunk * i)
        {
            while (struct_len(b) != chunk * i)
            {
                if (struct_len(a) <= 5)
                {
                    if (a->index >= 95)
                        break ;
                }
                if (a->index <= chunk * i && a->index <= 95)
                {
                    push_it(&a, &b, 1);
                }
                else
                    a = rotate_it(a, 1);
                if (struct_len(b) > 1)
                {
                    if (i == 1)
                    {
                        if (b->index > halfway)
                            b = rotate_it(b, 0);
                    }
                    else if (i > 1)
                    {
                        if (b->index > halfway + (chunk * i))
                            b = rotate_it(b, 0);
                    }
                }
            }
            j++;
        }
        i++;
    }
        ft_printf("struct a ==\n");
        print_list(a);
        ft_printf("--------------------------\n");
        ft_printf("struct b ==\n");
        print_list(b);
        //ft_printf("||||||||||||||||||||||||||\n");
        // printf("a before sort\n");
        // print_list(a);
        a = sort_cinco(a, b); //sort 5
        // while (b)
        // {
        //     push_it(&b, &a, 0);
        //     b = b->next;

        // }

    // int testmin = 0;
    // int testmax = 0;
    // int test2ndmin = 0;
    // int test2ncmax = 0;

    // testmax = looking_for_max(b);
	// testmin = looking_for_min(b);
    // test2ndmin = looking_for_min_2nd(b);
    // test2ncmax = looking_for_max_2nd(b);
    // ft_printf("...............\n");
	// ft_printf("max = [%d]\n2ndmax = [%d]\n", testmax, test2ncmax);
    // ft_printf("---------------\n");
	// ft_printf("min = [%d]\n2ndmin = [%d]\n\n", testmin, test2ndmin);
    return(a);
}