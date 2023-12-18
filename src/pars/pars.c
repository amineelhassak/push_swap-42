/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:27:31 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 15:08:39 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

int	cw_pars(t_stack *stack_a, int c, char **v)
{
	int			i;
	int			j;
	char		**str;
	long		n;
	int			k;

	(1 == 1) && (j = 0, k = 0, i = 0, n = 0);
	if (!cw_is_empty(v))
		return (0);
	while (++i < c)
	{
		str = ft_split(v[i], ' ', &k);
		j = -1;
		while (str[++j])
		{
			if (str[j][0] == '\0')
				exit(write(2, "ERROR\n", 6));
			n = cw_atoi(str[j]);
			if (!cw_check_all_numbers(str[j]) || n == 2147483648)
				return (0);
			cw_stack_add(stack_a, n);
		}
		cw_free(str, k);
	}
	return (1);
}
