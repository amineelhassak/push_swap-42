/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:11:26 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 16:57:57 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_push(t_stack *stack_1, t_stack *stack_2)
{
	t_node	*new_top;

	if (!stack_1->top)
		return ;
	if (!stack_2->top)
	{
		new_top = stack_1->top;
		stack_1->top = stack_1->top->next;
		stack_2->top = new_top;
		stack_2->tail = new_top;
		stack_2->tail->next = NULL;
		stack_1->len--;
		stack_2->len++;
		return ;
	}
	new_top = stack_1->top;
	stack_1->top = stack_1->top->next;
	new_top->next = stack_2->top;
	stack_2->top = new_top;
	stack_1->len--;
	stack_2->len++;
}
