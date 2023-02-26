/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/27 02:05:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack sort10(t_stack *a, t_stack *b)
// {
//     t_stack *tmp;
    
    
// }

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
    // int testmin = 0;
    // int testmax = 0;
    // int test2ndmin = 0;
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
    
    while (struct_len(b) != 95)
    {
        if (a->index <= 95)
            push_it(&a, &b);
        a = rotate_it(a);
    }
    print_list(a);
    ft_printf("==============================\n");
    print_list(b);
    // testmax = looking_for_max(b);
	// testmin = looking_for_min(b);
    // test2ndmin = looking_for_min_2nd(b);
    // ft_printf("...............\n");
	// ft_printf("max = [%d]\nmin = [%d]\n2ndmin = [%d]\n", testmax, testmin, test2ndmin);
    return(a);
}