/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:09:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/24 00:56:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhex(va_list arg)
{
	unsigned int	i;

	i = va_arg(arg, unsigned int);
	ft_putp(i, "0123456789ABCDEF");
	return (ft_lenp(i));
}
