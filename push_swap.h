/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:16:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/09 12:48:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>
//# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int					numero;
	int					index;
	struct s_stack		*next;
}	t_stack;

void		announce_mistake(char *str, char **av);
void		erase_split(char **av);
void		verify_dupnum(char **av);
void		verify_av(char **av);
t_stack		*set_stack(int ac, char *av, t_stack *a);
t_stack		*make_it_happen(int num);


//void	announce_mistake(char *str, char **av);
//void	erase_split(char **av);
//int		pmspace(char s);






#endif
