/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:39:20 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:52:03 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

static void	cw_oxe(t_stack *stack_a, t_stack *stack_b)
{
	pb(stack_a, stack_b, 1);
	rb(stack_b, 1);
}

void	cw_move_to_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	int	index1;
	int	index2;
	int	save_last;

	save_last = 0;
	(1 == 1) && (index2 = stack_a->len / 6, index1 = stack_a->len / 3);
	while (stack_a->len != 3)
	{
		if (stack_a->top->index < index1)
		{
			if (stack_a->top->index < index2)
				pb(stack_a, stack_b, 1);
			else
				cw_oxe(stack_a, stack_b);
		}
		else
			ra(stack_a, 1);
		if (index1 - 1 == stack_b->len)
		{
			(1 == 1) && (save_last = index1, index1 += stack_a-> len / 3);
			index2 = stack_a-> len / 6 + save_last;
		}
	}
}

void	cw_move_mid_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	int	len;

	len = stack_a->len;
	while (len > 0)
	{
		if (stack_a->top->index < 3)
			pb (stack_a, stack_b, 1);
		else
			ra (stack_a, 1);
		len--;
	}
}
