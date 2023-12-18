/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:34:38 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:35:51 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_mid_sort(t_stack *stack_a, t_stack *stack_b)
{
	cw_move_mid_stack_b(stack_a, stack_b);
	if (cw_is_sort(stack_b))
		sb(stack_b, 1);
	cw_small_sort(stack_a);
	while (stack_b->len)
		pa(stack_a, stack_b, 1);
}
