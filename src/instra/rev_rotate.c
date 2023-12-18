/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:12:30 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:12:42 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_rroate(t_stack *stack)
{
	t_node	*tail;
	t_node	*before_tail;

	if (stack->top && stack->top->next)
	{
		tail = stack->tail;
		before_tail = stack->top;
		while (before_tail->next->next)
			before_tail = before_tail->next;
		tail->next = stack->top;
		stack->top = tail;
		before_tail->next = NULL;
		stack->tail = before_tail;
	}
}
