/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:35:02 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 14:37:56 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

bool	cw_check_all_numbers(char *s)
{
	int	i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && s[i + 1] && ft_isdigit(s[i + 1]))
		i++;
	while (s[i])
	{
		if (!ft_isdigit((s[i++])))
			return (false);
	}
	return (true);
}
