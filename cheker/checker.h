/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:26:54 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 17:30:32 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define MSGERRR "KO\n"
# define MSGSUCC "OK\n"
# include "../includes/headers.h"
# include "../get_next_linee/get_next_line.h"

bool	sort_cheker(t_stack *stack_a, t_stack *stack_b, int *index);
int		ft_strcmp(char *src, char *dst);
#endif