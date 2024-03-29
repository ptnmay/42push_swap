/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:08:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/07 01:52:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	struct_len(t_stack *a)
{
	int	len;

	len = 0;
	while (a)
	{
		len++;
		a = a->next;
	}
	return (len);
}

int	inspection_index(t_stack *a, int tmp, int space)
{
	int		i;
	int		calculation;
	t_stack	*c;

	i = 0;
	calculation = 1;
	c = a;
	while (i <= space && c)
	{
		if (tmp > c->numero)
			calculation++;
		c = c->next;
		i++;
	}
	return (calculation);
}

void	insert_index(t_stack *a, int space)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = a;
	while (i < space && tmp)
	{
		tmp->index = inspection_index(a, tmp->numero, space);
		tmp = tmp->next;
		i++;
	}	
}
