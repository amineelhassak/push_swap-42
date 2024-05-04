/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:26:25 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 21:07:01 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		index;
	int		x;

	if (ac <= 1)
		exit(1);
	stack_a = cw_c_stack();
	if (!stack_a)
		return (ft_putendl_fd(MSGERR, 2), 1);
	stack_b = cw_c_stack();
	if (!stack_b)
		return (cw_clear_stack(stack_a), ft_putendl_fd(MSGERR, 2), 1);
	if (!cw_is_empty(av))
		return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGERR, 2), 1);
	if (!cw_pars(stack_a, ac, av))
		return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGERR, 2), 1);
	if (!cw_n_double(stack_a))
		return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGERR, 2), 1);
	x = sort_cheker(stack_a, stack_b, &index);
	if (index == 1)
		return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGERR, 2), 0);
	if (!x)
		return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGERRR, 1), 0);
	return (ox_free(stack_a, stack_b), ft_putendl_fd(MSGSUCC, 1), 0);
}
