/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/02 17:53:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_pos(int index, t_stack *b)
{
    int len;

    len = 0;
    while (b)
    {
        if (b->index == index)
            break ;
        len++;
        b = b->next;
    }
    return (len);
}

t_stack *sort_baek(t_stack *a, t_stack *b)
{
    int i;
    int j;
    int k;
    int chunk;

    i = 1;
    j = 1;
    chunk = 100 / 5;
    // chunk = struct_len(a) / 5;
    while (i <= 5)
    {
        k = j;
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
                    push_it(&a, &b, 1);
                else if (a->index <= (chunk * i) - 10)
                    a = rotate_it(a, 1);
                else if (a->index > (chunk * i) - 10)
                    a = rorotate_it(a, 1);
                if (struct_len(b) > 1 && b->index >= k)
                {
                    if (b->index <= (chunk * i) - 10)
                        b = rotate_it(b, 0);
                }
            }
            j++;
        }
        i++;
    }
    a = sort_cinco(a, b);
    j = 95;
    i = i - 2;
    // printf("this is k == {%d}\n", k);
    printf("max == {%d}\n", looking_for_max(b));
    printf("max2nd == {%d}\n", looking_for_max_2nd(b));
    while (i > 0)
    {
        // k = j;
        while (j > chunk * i)
        {
            printf("\nchunk * i == {%d}\n", chunk * i);
            printf("this is j == {%d}\n", j);
            // exit(0);
            // printf("b->index == <%d>\n", b->index);


            // print_list(b);
            // printf("find pos == %d\n", find_pos(92, b));
            // exit(0);

            if (b->index == looking_for_max(b) || b->index == looking_for_max_2nd(b))
            {
                push_it(&b, &a, 0);
                if (a->index > a->next->index)
                    switch_it(a, 1);
            }
            else if ((b->index != looking_for_max(b) || b->index != looking_for_max_2nd(b)))
            {
                    // print_list(a);
                    // printf("-----------before--b----------------\n");
                    // print_list(b);
                    // printf("-------------end--b----------------\n");
                // if (b->index == looking_for_max(b) &&
                //     looking_for_max(b) >= (chunk * i) - 10)
                if (find_pos(b->index, b) > (chunk * i) / 2)
                    b = rotate_it(b, 0);
                else
                {
                    b = rotate_it(b ,0);
                    // print_list(a);
                    // printf("-------------b----------------\n");
                    // print_list(b);
                    // printf("-------------end--b----------------\n");
                    // sleep(1);
                    // exit(0);
                }
            }
            j--;
        }
        i--;
    }

    

    ft_printf("struct a ==\n");
    print_list(a);
    ft_printf("--------------------------\n");
    ft_printf("struct b ==\n");
    print_list(b);
    ft_printf("--------------------------\n");
    // sleep(1);
    return(a);
}