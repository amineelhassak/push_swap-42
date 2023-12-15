#include "./includes/headers.h"

void v()
{
    system("leaks push_swap");
}
int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = cw_c_stack();
    stack_b = cw_c_stack();
    if (!cw_pars(stack_a,ac, av))
            return (ft_putendl_fd(MSGERR,2), 0);
    if (!cw_is_sort(stack_a))
    {
        cw_sort_index(stack_a);
        cw_select_sort_methode(stack_a,stack_b);
    }
    cw_clear_stack(stack_a);
    // free(stack_b);
    atexit(v);
    // cw_display(stack_a);
}