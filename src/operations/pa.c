/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:15:01 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:15:24 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	pa(t_stack *stack_a, t_stack *stack_b, int check)
{
	cw_push(stack_b, stack_a);
	if (check)
		ft_putendl_fd("pa\n", 1);
}
