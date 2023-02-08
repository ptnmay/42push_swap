/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/07 18:56:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int		i;

	t_stack	*a;
	t_stack	*b;

	if (ac <= 2 && (ft_strlen(av[1]) == 0))
		announce_mistake("<= three ac juseyo");
	i = 1;
	while (i < ac)
	{
		verify_av(av[i]);
		i++;
	}


}
