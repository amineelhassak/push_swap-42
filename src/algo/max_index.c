/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:33:39 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:34:12 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

int	cw_max_index(t_stack *stack)
{
	t_node	*tmp;
	int		max;

	tmp = stack->top;
	max = stack->top->index;
	while (tmp)
	{
		if (max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}
