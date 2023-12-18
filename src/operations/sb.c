/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:19:30 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:19:42 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	sb(t_stack *stack, int check)
{
	if (stack->top && stack->top->next)
		cw_swap(stack);
	if (check)
		ft_putendl_fd("sb\n", 1);
}
