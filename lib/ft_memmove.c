/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:28:09 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 17:25:38 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstt;
	char	*srcc;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (srcc == NULL && dstt == NULL)
		return (0);
	if (dstt > srcc)
	{
		while (n > 0)
		{
			dstt[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dstt++ = *srcc++;
			n--;
		}
	}
	return (dst);
}
