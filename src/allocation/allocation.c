/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:00:26 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:01:21 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

t_stack	*cw_c_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->tail = NULL;
	new->top = NULL;
	new->len = 0;
	return (new);
}

t_node	*cw_c_node(int value)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->index = 0;
	new->next = NULL;
	new->value = value;
	return (new);
}
