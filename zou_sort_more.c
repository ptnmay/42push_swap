/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/25 01:53:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_baek(t_stack *a, t_stack *b)
{
    int testmin = 0;
    int testmax = 0;
    int test2ndmin = 0;
    while (a->index <= 95)
    {
        push_it(&a, &b);
    }
    print_list(a);
    ft_printf("===========\n");
    print_list(b);
    testmax = looking_for_max(b);
	testmin = looking_for_min(b);
    test2ndmin = looking_for_min_2nd(b);
	ft_printf("max = [%d]\nmin = [%d]\n2ndmin = [%d]\n", testmax, testmin, test2ndmin);
    return(a);
}