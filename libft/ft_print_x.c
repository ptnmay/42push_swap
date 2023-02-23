/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:54:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/24 00:57:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_x(va_list arg)
{
	unsigned int	i;

	i = va_arg(arg, unsigned int);
	ft_putp(i, "0123456789abcdef");
	return (ft_lenp(i));
}
