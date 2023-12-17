#include "checker.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = cw_c_stack();
    if (!stack_a)
        return (ft_putendl_fd(MSGERRR, 2), 0);
    stack_b = cw_c_stack();
    if (!stack_b)
        return (ft_putendl_fd(MSGERRR, 2), 0);
    if (!cw_pars(stack_a,ac, av))
            return (ft_putendl_fd(MSGERRR, 2), 0);
    if (!sort_by_arg(stack_a,stack_b))
        return (ft_putendl_fd(MSGERRR, 2), 0);
   ft_putendl_fd(MSGSUCC, 1);
}