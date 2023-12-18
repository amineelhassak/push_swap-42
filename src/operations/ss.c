/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:19:54 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:20:58 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	ss(t_stack *stack_a, t_stack *stack_b, int check)
{
	if (stack_a->top && stack_a->top->next)
	{
		if (stack_b->top && stack_b->top->next)
		{
			cw_swap(stack_a);
			cw_swap(stack_b);
		}
	}
	if (check)
		ft_putendl_fd("ss\n", 1);
}
