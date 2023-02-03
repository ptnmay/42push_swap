/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:03:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/04 01:23:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>

// typedef struct s_stack
// {
// 	int				num;
// 	char			*word;
// 	struct s_stack	*next;
// }	t_stack;

// void	link_torpai(t_stack **link, t_stack **neww)
// {
// 	t_stack *tmp;

// 	tmp = (*link);
// 	while(tmp->next != NULL)
// 		tmp = tmp->next;
// 	tmp->next = (*neww);
// }

// t_stack	*srang_link(int i, char *s)
// {
// 	t_stack	*new;

// 	new = (t_stack *)malloc(sizeof(t_stack));
// 	new->num = i;
// 	new->word = s;
// 	new->next = NULL;
// 	return(new);
// }

// int main(int ac, char **av)
// {
// 	t_stack	*new;
// 	t_stack	*newer;
// 	t_stack	*newst;

// 	new = srang_link(12, "hello");
// 	newer = srang_link(24, "world");
// 	link_torpai(&new, &newer);
// 	printf("new next = %d %s\n", new->next->num, new->next->word);
// 	printf("newer = %d %s\n", newer->num, newer->word);
//
// srang linked list and linked tor pai

//try again

typedef struct s_stack
{
	int			num;
	char		*s;
	struct s_stack *next;
}	t_stack;

void	link_tor(t_stack **link, t_stack **tor)
{
	t_stack *tmp;

	tmp = (*link);
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*tor);
}

t_stack *srang_list(int i, char *s)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->num = i;
	new->s = s;
	new->next = NULL;
	return(new);
}

int main(void)
{
	t_stack	*new;
	t_stack	*newer;
	t_stack	*newest;
	t_stack *tmp;

	new = srang_list(9587584, "bye");
	newer = srang_list(29, "an-nyong");
	newest = srang_list(6, "adios");
	link_tor(&new, &newer);
	link_tor(&newer, &newest);
	tmp = new;
	while(tmp != NULL)
	{
		printf("%d\n", new->num);
		printf("%s\n", new->s);
		tmp = tmp->next;
	}
}

