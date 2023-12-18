/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_upper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:55:33 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:56:28 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_push_from_up(t_stack *stack_a, t_stack *stack_b, int max_a, int *in)
{
	while (stack_b->top->index != stack_a->top->index - 1)
	{
		if (!*in || stack_b->top->index > stack_a->tail->index)
		{
			pa(stack_a, stack_b, 1);
			ra(stack_a, 1);
			(*in) = 1;
		}
		else
			rb(stack_b, 1);
		if (stack_a->tail->index == max_a)
			(*in) = 0;
	}
	pa(stack_a, stack_b, 1);
}
