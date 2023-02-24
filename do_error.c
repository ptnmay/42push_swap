/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:30:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/25 01:18:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	erase_split(char **av)
{
	int	i;

	i = 0;
	while(av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

void	announce_mistake(char *str, char **av)
{
	ft_putendl_fd(str, 2);
	erase_split(av);
	exit(EXIT_SUCCESS);
}

int	pmspace(char s)
{
	if (s == '-' || s == '+' || (s >= 9 && s <= 13) || s == 32)
		return(1);
	return(0);
}

void	verify_av(char **av)
{
	int		i;
	int		uno;
	int		dos;
	char	**rip;

	i = 1;

	while(av[i])
	{
		rip = ft_split(av[i], ' ');
		uno = 0;
		while (rip[uno])
		{
			dos = 0;
			while(rip[uno][dos])
			{
				if (pmspace(rip[uno][dos]) == 1 || ft_isdigit(rip[uno][dos]) == 1)
					dos++;
				else
					announce_mistake("Errordigit", rip);
			}
			uno++;
		}
		erase_split(rip);
		i++;
	}
}
