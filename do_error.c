/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:30:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/10 03:08:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}

void	erase_split(char **av)
{
	int	i;

	i = 0;
	while (av[i])
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

void	loop_verify_av(char **rip, int uno, int dos)
{
	while (rip[uno][dos])
	{
		if (rip[uno][dos] == '-' || rip[uno][dos] == ' ' \
		|| ft_isdigit(rip[uno][dos]))
		{
			if ((rip[uno][dos] == '-' && !(rip[uno][dos + 1])) || \
			(rip[uno][dos] == '-' && rip[uno][dos + 1] == '-'))
			{
				announce_mistake("Error", rip);
			}
			dos++;
		}
		else
			announce_mistake("Error", rip);
	}
}

void	verify_av(char **av)
{
	int		i;
	int		uno;
	int		dos;
	char	**rip;

	i = 1;
	while (av[i])
	{
		rip = ft_split(av[i], ' ');
		uno = 0;
		while (rip[uno])
		{
			dos = 0;
			loop_verify_av(rip, uno, dos);
			uno++;
		}
		erase_split(rip);
		i++;
	}
}
