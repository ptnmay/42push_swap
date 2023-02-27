/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looking_for_sth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:18:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/27 17:15:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int looking_for_min_2nd(t_stack *a)
{
    t_stack *tmp;
    int     min;
    int     secondmin;

    tmp = a;
    min = looking_for_min(a);
    secondmin = looking_for_max(a);
    while (tmp->next)
    {
        if (tmp->numero > min && tmp->numero < secondmin)
            secondmin = tmp->index;
            //secondmin = tmp->numero;
        tmp = tmp->next;
    }
    return (secondmin);
}

int	looking_for_max(t_stack *a)
{
	t_stack	*tmp;
	int		maximun;

	tmp = a;
	maximun = tmp->index;
	while (tmp->next)
	{
		if (maximun < tmp->next->index)
			maximun = tmp->next->index;
			//maximun = tmp->next->numero;
		tmp = tmp->next;
	}
	return (maximun);
}

int	looking_for_min(t_stack *a)
{
	t_stack	*tmp;
	int		mininum;

	tmp = a;
	mininum = tmp->index;
	while(tmp->next)
	{
		if (mininum > tmp->next->index)
			mininum = tmp->next->index;
			//mininum = tmp->next->numero;
		tmp = tmp->next;
	}
	return (mininum);
}