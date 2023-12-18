/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:01:30 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:02:50 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_clear_stack(t_stack *stack)
{
	t_node	*tmp;

	if (stack)
		return ;
	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
		tmp = NULL;
	}
	free(stack);
}
