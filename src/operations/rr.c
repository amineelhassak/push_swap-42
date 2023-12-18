/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:17:08 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:17:33 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	rr(t_stack *stack_a, t_stack *stack_b, int check)
{
	cw_rotate(stack_a);
	cw_rotate(stack_b);
	if (check)
		ft_putendl_fd("rr\n", 1);
}
