/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:46:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/09 01:59:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	verify_dupnum(char **av)
{
	char	**rip;
	int		i;
	int		il;
	int		e;

	i = 1;
	il = 0;
	e = 1;
	while(av[i])
	{
		rip = ft_split(av[il], ' ');
		while(rip[il])
		{
			if (ft_atoi(rip[il]) == ft_atoi(rip[e]))
			{
				announce_mistake("Doppelganger digits do not allow\n", rip);
			}
			e++;
		}
		il++;
	}
}
