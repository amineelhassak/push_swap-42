/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:04:13 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:06:46 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	cw_display(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	if (!stack)
		return ;
	while (tmp)
	{
		ft_putnbr_fd(tmp->index, 1);
		tmp = tmp->next;
	}
}
