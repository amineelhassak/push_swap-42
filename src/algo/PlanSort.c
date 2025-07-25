/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlanSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:52:29 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:53:07 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_select_sort_methode(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->len == 2)
		sa(stack_a, 1);
	else if (stack_a->len == 3)
		cw_small_sort(stack_a);
	else if (stack_a->len == 4 || stack_a->len == 5)
		cw_mid_sort(stack_a, stack_b);
	else
		cw_big_sort(stack_a, stack_b);
}
