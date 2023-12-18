/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_position_max.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:57:30 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 01:58:01 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

int	cw_search_position_max(t_stack *stack, int element)
{
	int		len;
	t_node	*tmp;

	tmp = stack->top;
	len = stack->len / 2;
	while (tmp)
	{
		if (tmp->index == element)
		{
			if (len > 0)
				return (2);
			else
				return (1);
		}
		tmp = tmp->next;
		len--;
	}
	return (0);
}
