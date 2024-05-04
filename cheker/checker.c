/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:26:36 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 21:06:39 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *src, char *dst)
{
	while (*src && *dst && *src == *dst)
	{
		src++;
		dst++;
	}
	return ((*src) - (*dst));
}

static int	ox_sec_checker(char *str, t_stack *stack_a, t_stack *stack_b)
{
	if (!ft_strcmp(str, "rrb\n"))
		return (rrb(stack_b, 0), 1);
	else if (!ft_strcmp(str, "rra\n"))
		return (rra(stack_a, 0), 1);
	else if (!ft_strcmp(str, "rrr\n"))
		return (rrr(stack_a, stack_b, 0), 1);
	else if (!ft_strcmp(str, "ra\n"))
		return (ra(stack_a, 0), 1);
	else if (!ft_strcmp(str, "rb\n"))
		return (rb(stack_b, 0), 1);
	else if (!ft_strcmp(str, "rr\n"))
		return (rr(stack_a, stack_b, 0), 1);
	else if (!ft_strcmp(str, "sa\n"))
		return (sa(stack_a, 0), 1);
	return (0);
}

static void	ox_checker(char *str, t_stack *stack_a, t_stack *stack_b, int *in)
{
	int	n;

	while (str)
	{
		n = 0;
		n = ox_sec_checker(str, stack_a, stack_b);
		if (!ft_strcmp(str, "sb\n"))
			sb (stack_b, 0);
		else if (!ft_strcmp(str, "ss\n"))
			ss(stack_a, stack_b, 0);
		else if (!ft_strcmp(str, "pa\n"))
			pa(stack_a, stack_b, 0);
		else if (!ft_strcmp(str, "pb\n"))
			pb(stack_a, stack_b, 0);
		else if (n == 0)
		{
			*in = 1;
			exit(write(2, "Error\n", 6));
		}
		free(str);
		str = get_next_line(0);
	}
}

bool	sort_cheker(t_stack *stack_a, t_stack *stack_b, int *index)
{
	char	*str;

	*index = 0;
	str = get_next_line(0);
	ox_checker(str, stack_a, stack_b, index);
	if (!stack_a->top)
		return (false);
	if (!cw_is_sort(stack_a))
		return (false);
	if (cw_is_sort(stack_a) && stack_b->len == 0)
		return (true);
	return (false);
}
