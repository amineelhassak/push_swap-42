/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:26:25 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 15:17:58 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "checker.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     index;
    int     x;

    index = 0;
    if(ac <= 1)
        exit(1);
    stack_a = cw_c_stack();
    if (!stack_a)
        return (ft_putendl_fd(MSGERR, 2), 0);
    stack_b = cw_c_stack();
    if (!stack_b)
        return (ft_putendl_fd(MSGERR, 2), 0);
    if (!cw_pars(stack_a, ac, av))
            return (ft_putendl_fd(MSGERR, 2), 0);
    x =  sort_by_arg(stack_a, stack_b, &index);
    if (index)
        exit(0);
    if (!x)
        return (ft_putendl_fd(MSGERRR, 1), 0);
   ft_putendl_fd(MSGSUCC, 1);
   cw_clear_stack(stack_a);
   cw_clear_stack(stack_b);
   return (1);
}