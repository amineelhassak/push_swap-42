/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:44:10 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 14:54:32 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers.h"

long	cw_atoi(const char *str)
{
	int		s;
	size_t	r;
	int		i;

	(1 == 1) && (s = 1, i = 0, r = 0);
	while (str[i] && ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13))))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			s *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	if (!str[i])
		return (0);
	while (*str && (*(str + i) >= '0' && *(str + i) <= '9') && *(str + i))
		r = r * 10 + str[i++] - '0';
	if ((r > INT_MAX && s == 1))
		return (2147483648);
	if (((r * s) < (unsigned long)INT_MIN && s == -1))
		return (2147483648);
	return (s * r);
}
