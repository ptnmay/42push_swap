/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:30:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/07 18:56:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	announce_mistake(char *str)
{
	printf("%s\n", str);
	exit(EXIT_SUCCESS);
}

void	verify_av(char *av)
{
	int		i;
	char	**agv;
	int		uno;
	int		dos;

	i = 0;
	uno = 0;
	dos = 0;
	agv = ft_split(av[i + 1], ' ');
	while(agv[uno])
	{
		if
	}
}
