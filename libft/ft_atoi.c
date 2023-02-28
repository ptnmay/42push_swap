/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:37:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/28 23:42:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str, char **rip)
{
	long	ans;
	long	neg;

	ans = 0;
	neg = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (ans * neg > 2147483647 || ans * neg < -2147483648)
	{
		erase_split(rip);
		write(2, "Error\n", 6);
		exit(EXIT_SUCCESS);
	}
	return (ans * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	*a;
	char	*b;

	a = "asdsf";
	b = "1234";
	printf("%d", (ft_atoi((e + "+1"));
}*/
