/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:27:31 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 17:50:16 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

void	ox_free(t_stack *stack_a, t_stack *stack_b)
{
	cw_clear_stack(stack_a);
	cw_clear_stack(stack_b);
}

int	cw_pars(t_stack *stack_a, int c, char **v)
{
	int			i;
	int			j;
	char		**str;
	long		n;
	int			k;

	(1 == 1) && (j = 0, k = 0, i = 0, n = 0);
	while (++i < c)
	{
		str = ft_split(v[i], ' ', &k);
		if (!str)
			return (cw_free(str, k), 0);
		j = -1;
		while (str[++j])
		{
			if (str[j][0] == '\0')
				return (cw_free(str, k), 0);
			n = cw_atoi(str[j]);
			if (!cw_check_all_numbers(str[j]) || n == 2147483648)
				return (cw_free(str, k), 0);
			cw_stack_add(stack_a, n);
		}
		cw_free(str, k);
	}
	return (1);
}
