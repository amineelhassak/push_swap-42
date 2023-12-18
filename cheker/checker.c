/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:26:36 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 15:18:23 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int ft_strcmp(char *src,char *dst)
{
    while (*src && *dst && *src == *dst)
    {
        src++;
        dst++;
    }
    return ((*src) - (*dst));
}

bool sort_by_arg(t_stack *stack_a,t_stack *stack_b,int *index)
{
    char *str;

    str = get_next_line(0);
    while (str)
    {
        if (!ft_strcmp(str, "rrb\n"))
            rrb(stack_b, 0);
        else if (!ft_strcmp(str, "rra\n"))
            rra(stack_a,0);
        else if( !ft_strcmp(str, "rrr\n"))
            rrr(stack_a, stack_b, 0);
        else if (!ft_strcmp(str , "ra\n"))
            ra(stack_a, 0);
        else if (!ft_strcmp(str,"rb\n"))
            rb(stack_b, 0);
        else if (!ft_strcmp(str, "rr\n"))
            rr(stack_a, stack_b, 0);
        else if (!ft_strcmp(str, "sa\n"))
            sa(stack_a, 0);
        else if (!ft_strcmp(str, "sb\n"))
            sb (stack_b, 0);
        else if (!ft_strcmp(str,"ss\n"))
            ss(stack_a, stack_b, 0);
        else if(!ft_strcmp(str,"pa\n"))
            pa(stack_a, stack_b, 0);
        else if(!ft_strcmp(str,"pb\n"))
            pb(stack_a, stack_b, 0);
        else
        {
            *index  = 1;
            exit(write(2, "Error\n", 6));
        }
        free(str);
        str = get_next_line(0);
    }
    if (!stack_a->top)
		return (false);
    if (!cw_is_sort(stack_a))
        return (false);
    if (cw_is_sort(stack_a) && stack_b->len == 0)
        return (true);
    return (false);
}

