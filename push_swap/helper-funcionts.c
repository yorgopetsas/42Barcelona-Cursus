/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper-funcionts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:34:56 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/09 20:19:08 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	stack = NULL;
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	symb;

	num = 0;
	symb = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		symb = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		num *= 10;
		num = num + (*nptr - 48);
		nptr++;
	}
	return (num * symb);
}

void	show_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack_a;
	tmp2 = *stack_b;
	printf("\n------------------------------\n");
	printf("\nSTACK A\t\t\t\tSTACK B");
	while (tmp || tmp2)
	{
		if (tmp)
		{
			printf("\n %d - %zu", tmp->num, tmp->index);
			tmp = tmp->next;
		}
		else
			printf("\n -");
		if (tmp2)
		{
			printf("\t\t\t\t%d - %zu", tmp2->num, tmp2->index);
			tmp2 = tmp2->next;
		}
		else
			printf("\t\t\t\t-");
	}
	printf("\n\n------------------------------\n");
	ft_free_stack(&tmp);
	ft_free_stack(&tmp2);
}
