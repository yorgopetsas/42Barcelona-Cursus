/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:36:39 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/06 17:06:35 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
// TMP
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int	num;
	size_t	index;
	struct s_stack	*next;
}	t_stack;

// int	G;

ssize_t	startup(char **argv, int idx, int argc);

// Stack Functions
size_t	add_at_end(t_stack **stack, t_stack *new_item);
size_t  fill_stack(t_stack **stack_a, int idx, char **input, int argc);
size_t  fill_stack_b(t_stack **stack_a, int idx, char **input, int argc);
t_stack *stack_mem(t_stack *stack);
t_stack	*create_cont(int num);
void	put_index(t_stack **stack);

// CASES
void	case_controler(t_stack **stack_a, t_stack **stack_b, int argc);
void	case_two(t_stack **stack, t_stack **stack_b);
void	case_three(t_stack **stack, t_stack **stack_b);
void	case_four(t_stack **stack_a, t_stack **stack_b);
void	case_five(t_stack **stack_a, t_stack **stack_b);
void	case_hun(t_stack **stack_a, t_stack **stack_b);
void	case_fhun(t_stack **stack_a, t_stack **stack_b);

// CASE THREE SCENARIOS
int	scenario_1(t_stack **stack, t_stack **stack_b);
int scenario_2(t_stack **stack, t_stack **stack_b);
int scenario_3(t_stack **stack, t_stack **stack_b);
int scenario_4(t_stack **stack, t_stack **stack_b);
int scenario_5(t_stack **stack, t_stack **stack_b);

// OPERATIONS
void	ft_sw(t_stack **stack, t_stack **stack_b, int state);
void	ft_rrab(t_stack **stack, t_stack **stack_b, int state);
void	ft_rab(t_stack **stack, t_stack **stack_b, int state);
void	ft_pab(t_stack **stack_b, t_stack **stack_a, int state);

// ERROR HANDLING
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b);
size_t	ft_error(void);
int	check_input(int argc, char **argv);

// LIBFT
int	ft_atoi(const char *nptr);
// ssize_t	ft_itoa(int n);

// HELPER FUNCTINOS
void	show_stack(t_stack **stack_a, t_stack **stack_b);
void	ft_free_stack(t_stack **stack);

#endif
