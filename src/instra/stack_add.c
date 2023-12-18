/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:14:03 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:14:04 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_stack_add(t_stack *stack, int value)
{
	t_node	*new_node;

	if (!stack)
		return ;
	new_node = cw_c_node(value);
	if (!stack->top)
	{
		stack->top = new_node;
		stack->tail = new_node;
		stack->len++;
		return ;
	}
	new_node->next = NULL;
	stack->tail->next = new_node;
	stack->tail = new_node;
	stack->len++;
}
