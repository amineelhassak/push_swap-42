/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:18:57 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:19:05 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	rrr(t_stack *stack_a, t_stack *stack_b, int check)
{
	cw_rroate(stack_a);
	cw_rroate(stack_b);
	if (check)
		ft_putendl_fd("rrr\n", 1);
}
