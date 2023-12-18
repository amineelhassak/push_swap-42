/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stractus.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:23:17 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 17:24:54 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRACTUS_H
# define STRACTUS_H

typedef struct s_node
{
	int				index;
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*tail;
	int		len;
}	t_stack;
#endif