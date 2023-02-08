/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_link_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:18:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/09 02:41:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>

typedef	struct s_vector
{
	char	*name;
	int		x;
	int		y;
} t_vector;


typedef struct s_stack
{
	int					numero;
	char				*numm;
	struct s_stack		*next;

}	t_stack;

typedef struct s_main
{
	t_vector	*p;
} t_main;


void	next_link(t_stack **lnk, t_stack **new)
{
	t_stack *tmp;

	tmp = (*lnk);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*new);
}

t_stack *create_link(int data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->numero = data;
	new->next = NULL;
	return (new);
}

int main(int ac, char **av)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	// if (ac <= 2)
	// {
	// 	printf("<= three ac juseyo");
	// 	exit(EXIT_SUCCESS);
	// }
	(void)ac;
	(void)av;
	t_stack *new;
	t_stack *new1;
	t_stack *new2;
	t_stack *tmp;


	new = (t_stack *)malloc(sizeof(t_stack));
	new->numero = 40;
	new->next = NULL;

	new1 = (t_stack *)malloc(sizeof(t_stack));
	new1->numero = 42;
	new1->next = NULL;

	new->next = new1;

	new2 = create_link(44);
	next_link(&new, &new2);

	printf("%d\n",new2->numero);
	tmp = new;
	while (tmp != NULL)
	{
		printf("%d\n", new->numero);
		tmp = tmp->next;
	}
	printf("fasdfads%d\n", new->next->numero);

	t_main	main;

	main.p = (t_vector *)malloc(sizeof(t_vector) * 5);

	main.p[0].name ="hello";
	main.p[0].x = 7;
	main.p[0].y = 12;
	main.p[1].name ="hello1";
	main.p[1].x = 71;
	main.p[1].y = 121;
	main.p[2].name ="hello2";
	main.p[2].x = 72;
	main.p[2].y = 122;
	main.p[3].name ="hello3";
	main.p[3].x = 73;
	main.p[3].y = 123;
	main.p[4].name ="hello4";
	main.p[4].x = 74;
	main.p[4].y = 125;

	int	j = 0;

	while (j < 5)
	{
		printf("j = %d\n", j);
		printf("name %s\n", main.p[j].name);
		printf("x %d\n", main.p[j].x);
		printf("y %d\n", main.p[j].y);
		j++;
	}
	return (0);
}
