/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:29:02 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 18:35:06 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/headers.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

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
	if (!cw_is_sort(stack_a))
	{
		cw_sort_index(stack_a);
		cw_select_sort_methode(stack_a, stack_b);
	}
	return (ox_free(stack_a, stack_b), 0);
}
