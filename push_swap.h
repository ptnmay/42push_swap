/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:16:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/14 02:09:55 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_info
{
	int		space_a;
	int		space_b;
}	t_info;

typedef struct s_stack
{
	int					numero;
	int					index;
	t_info				*info;
	struct s_stack		*next;
}	t_stack;


void		announce_mistake(char *str, char **av);
void		announce_failure(char *str, t_stack *a);
void		erase_split(char **av);
void		verify_av(char **av);
void		verify_doppelganger(t_stack *a);
int 		struct_len(t_stack *a);
int			verify_sort(t_stack *a);
void    	insert_index(t_stack *a, int space);
int			inspection_index(t_stack *a, int tmp, int space);
t_stack		*make_it_happen(int num);
t_stack		*set_stack(char **av);
t_stack		*set_last(t_stack *lst);




#endif
