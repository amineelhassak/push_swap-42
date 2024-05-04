/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:13:12 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 21:26:15 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_rotate(t_stack *stack)
{
	t_node	*oldtop;

	if (stack->top && stack->top->next)
	{
		oldtop = stack->top;
		stack->top = stack->top->next;
		stack->tail->next = oldtop;
		stack->tail = oldtop;
		stack->tail->next = NULL;
	}
}
