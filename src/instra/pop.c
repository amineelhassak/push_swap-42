/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:10:36 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:11:10 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_pop(t_stack *stack)
{
	t_node	*new_top;

	if (stack->top)
	{
		new_top = stack->top->next;
		free(stack->top);
		stack->top = new_top;
	}
}
