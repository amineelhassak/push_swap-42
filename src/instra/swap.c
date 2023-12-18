/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:14:24 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:14:34 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_swap(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top->next;
	if (stack->top && stack->top->next)
	{
		stack->top->next = stack->top->next->next;
		tmp->next = stack->top;
		stack->top = tmp;
	}
}
