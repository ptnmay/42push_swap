/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/28 02:47:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_baek(t_stack *a, t_stack *b)
{
    // int chunk = 100 / 5;
    // int i = 1;
    // int j = 1;
    // int t = 0;
    // t_stack *tmp;

    // tmp = a;
    // ft_printf("chunk = [%d]\n", chunk);
    // while (i <= 5)
    // {
    //     while (j <= (chunk * i) && tmp != NULL)
    //     {
    //         if (tmp->index <= (chunk * i) && t < 95)
    //         {
    //             push_it(&a, &b);
    //             t++;
                //ft_printf("num = [%d] || index = [%d]\n", a->numero, a->index);
                //push_it(&a, &b);
                //a = a->next;
            // }
            // else
            // {
                // while(tmp)
                // {
                //     if (tmp->index <= (chunk * i))
                //         break ;
                //     tmp = tmp->next;
                // }
                // while(tmp->index != a->index)
                //     rotate_it(a);
                // push_it(&a, &b);
                // t++;
            //     a = rotate_it(a);
            // }
            // ft_printf("num = [%d] || index = [%d]\n", a->numero, a->index);
            // ft_printf("+++++++++++++\n");
            // ft_printf("numb = [%d] || indexb = [%d]\n", b->numero, b->index);
    //         j++;
    //     }
    //     i++;
    // }
        // print_list(a);
        // ft_printf("==========================\n");
        // print_list(b);
    //nt i = 0;
    // while (a->index <= 95)
    // {
    //     push_it(&a, &b);
    // }
    // while(i < 95)
    // {
    //     push_it(&a, &b);
    //     i++;
    // }
    
    // while (struct_len(b) != 95)
    // {
    //     if (a->index <= 95)
    //         push_it(&a, &b);
    //     a = rotate_it(a);
    // }

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
                if (i == 5)
                {
                    if (a->index >= 95)
                        break ;
                }
                if (a->index <= chunk * i)
                {
                    push_it(&a, &b);
                }
                else
                    a = rotate_it(a);
            }
            
            j++;
        }
        i++;
    }
        a = sort_cinco(a, b);
        print_list(a);
        ft_printf(";;;;;;;;;;;;;;;;;;;;;;;;;;\n");
        print_list(b);

    int testmin = 0;
    int testmax = 0;
    int test2ndmin = 0;
    int test2ncmax = 0;

    testmax = looking_for_max(b);
	testmin = looking_for_min(b);
    test2ndmin = looking_for_min_2nd(b);
    test2ncmax = looking_for_max_2nd(b);
    ft_printf("...............\n");
	ft_printf("max = [%d]\n2ndmax = [%d]\n", testmax, test2ncmax);
    ft_printf("---------------\n");
	ft_printf("min = [%d]\n2ndmin = [%d]\n", testmin, test2ndmin);
    return(a);
}