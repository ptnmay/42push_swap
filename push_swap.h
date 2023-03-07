/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:16:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/08 03:03:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_info
{
	int	pos1;
	int	pos2;
	int	posmax;
	int	posmax2;
	int	i;
	int	j;
	int	k;
	int	chunk;
}	t_info;

typedef struct s_stack
{
	int					numero;
	int					index;
	struct s_stack		*next;
}	t_stack;

void		print_list(t_stack *ab);
void		announce_mistake(char *str, char **av);
void		announce_failure(char *str, t_stack *a);
// void		announce_failure(t_stack *a);
void		erase_split(char **av);
void		erase_stack(t_stack *a);
void		verify_av(char **av);
void		verify_doppelganger(t_stack *a);
void		insert_index(t_stack *a, int space);
int 		struct_len(t_stack *a);
int			verify_sort(t_stack *a);
int			inspection_index(t_stack *a, int tmp, int space);
int			looking_for_max(t_stack *a);
int			looking_for_min(t_stack *a);
int 		looking_for_min_2nd(t_stack *a);
int			looking_for_max_2nd(t_stack *a);
int			looking_for_position(int index, t_stack *b);

//sort ft
// void		rr(t_stack **a, t_stack **b);
// void		rrr(t_stack **a, t_list **b);
// void		ss(t_stack **a, t_stack **b);
void		push_it(t_stack **ab, t_stack **ba, int mode);

t_stack		*comingback2a(t_stack *a, t_stack *b);
t_stack 	*comingback2_a(t_stack *a, t_stack *b);

t_stack		*loop_rrb(t_stack *b, int pos);
t_stack		*loop_rb(t_stack *b, int pos);

t_stack		*switch_it(t_stack *ab, int mode);
t_stack		*rotate_it(t_stack *ab, int mode);
t_stack		*rorotate_it(t_stack *ab, int mode);
t_stack 	*sort_cinco(t_stack *a, t_stack *b);
t_stack		*sort_baek(t_stack *a, t_stack *b);
t_stack 	*sort_o_baek(t_stack *a, t_stack *b);
t_stack		*sort_galaxy(t_stack *a, t_stack *b);

t_stack		*zou_sort(t_stack *a, t_stack *b, int space);
t_stack		*make_it_happen(int num);
t_stack		*set_stack(char **av);
t_stack		*set_last(t_stack *lst);




#endif
