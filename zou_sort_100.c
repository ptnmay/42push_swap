/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou_sort_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:29:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/05 06:27:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sort_baek(t_stack *a, t_stack *b)
{
	int i;
	int j;
	int k;
	int chunk;

	chunk = 1;
	i = 20;
	j = 1;
	while (chunk <= 5)
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
					push_it(&a, &b, 0);
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
		chunk++;
	}
	a = sort_cinco(a, b);
	// print_list(b);
	// exit(0);
	a = comingback2a(a, b);



//b to a only max
// int posmax;
// int	posmax2;
		
// 	int sth = 15;
// 	while (sth > 0)
// 	{
// 		posmax = looking_for_position(looking_for_max(b), b);
// 		posmax2 = looking_for_position(looking_for_max_2nd(b), b);
// 		if (posmax < struct_len(b) / 2)
// 		{
// 			while (posmax > 0)
// 			{
// 				b = rotate_it(b, 0);
// 				posmax--;
// 			}
// 		}
// 		else
// 		{
// 			while ((struct_len(b) - posmax) > 0)
// 			{
// 				b = rorotate_it(b, 0);
// 				posmax++;
// 			}

// 		}
// 		push_it(&b, &a, 1);
// 		sth--;
// 	}
	
	// int four = 4;
	// while (four > 0)
	// {
	// 	sth = 20;
	// 	while (sth > 0)
	// 	{
	// 		posmax = looking_for_position(looking_for_max(b), b);
	// 		if (posmax <= struct_len(b) / 2)
	// 		{
	// 			while (posmax > 0)
	// 			{
	// 				b = rotate_it(b, 0);
	// 				posmax--;
	// 			}
	// 		}
	// 		else
	// 		{
	// 			while ((struct_len(b) - posmax) > 0)
	// 			{
	// 				b = rorotate_it(b, 0);
	// 				posmax++;
	// 			}

	// 		}
	// 		push_it(&b, &a, 1);
	// 		sth--;
	// 	}
	// 	four--;

	// }

	// while (b->index >= 81 && b->index <= 95)
	// {
	//     if ((b->index == looking_for_max(b) && looking_for_max(b)) || (b->index == looking_for_max_2nd(b) && looking_for_max_2nd(b)))
	//     {
	//         push_it(&b, &a, 0);
	//         if (a->index > a->next->index)
	//             a = switch_it(a, 1);
	//     }
	//     else
	//     {
	//         if (b->index >= 88)
	//             b = rotate_it(b, 0);
	//         else
	//             b = rorotate_it(b, 0);
	//     }
	// }
	
	// j = 95;
	// i = i - 2;
	// while (i > 0)
	// {
	//     while (j > chunk * i)
	//     {
	//         if (b->index == looking_for_max(b) || b->index == looking_for_max_2nd(b))
	//         {
	//             push_it(&b, &a, 0);
	//             if (a->index > a->next->index)
	//                 switch_it(a, 1);
	//         }
	//         else if ((b->index != looking_for_max(b) || b->index != looking_for_max_2nd(b)))
	//         {
	//             if (looking_for_position(b->index, b) > (chunk * i) / 2)
	//                 b = rotate_it(b, 0);
	//             else
	//             {
	//                 b = rotate_it(b ,0);
	//             }
	//         }
	//         j--;
	//     }
	//     i--;
	// }

	

	return(a);
}