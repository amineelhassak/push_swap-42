/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b <b@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:31:00 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/19 18:23:29 by b                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

static long	cw_get_min(t_stack *stack)
{
	long		min;
	t_node	*tmp;

	tmp = stack->top;
	min = 2147483648;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

static long	cw_next_min(t_stack *stack, int min)
{
	long		next_min;
	t_node	*tmp;

	next_min = 2147483648;
	tmp = stack->top;
	while (tmp)
	{
		if ((tmp->index == 0) && tmp->value > min && tmp->value < next_min)
			next_min = tmp->value;
		tmp = tmp->next;
	}
	return (next_min);
}

void	cw_sort_index(t_stack *stack)
{
	t_node	*tmp;
	long	min;
	int		i;

	i = 1;
	min = cw_get_min(stack);
	while (min != 2147483648)
	{
		tmp = stack->top;
		while (tmp)
		{
			if (tmp->value == min && tmp->index == 0)
			{
				tmp->index = i;
				i++;
			}
			tmp = tmp->next;
		}
		min = cw_next_min(stack, min);
	}
}
