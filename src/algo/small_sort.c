/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:58:20 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:58:50 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_small_sort(t_stack *stack)
{
	int	max_index;

	max_index = cw_max_index(stack);
	if (stack->top->next->index == max_index)
		rra(stack, 1);
	else if (stack->top->index == max_index)
		ra(stack, 1);
	if (stack->top->index > stack->top->next->index)
		sa(stack, 1);
}
