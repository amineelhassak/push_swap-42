/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:15:42 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 02:15:58 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	pb(t_stack *stack_a, t_stack *stack_b, int check)
{
	cw_push(stack_a, stack_b);
	if (check)
		ft_putendl_fd("pb\n", 1);
}
