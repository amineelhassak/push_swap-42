#include "./includes/headers.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = cw_c_list();
    stack_b = cw_c_list();
    if(!cw_pars(stack_a,ac, av))
    {
    		ft_putendl_fd(MSGERR,2);
            return 0;
    }
    if(!cw_is_sort(stack_a))
    {
        cw_sort_index(stack_a);
        cw_select_sort_methode(stack_a,stack_b);
    }
    // main2(stack_a, stack_b);
    // cw_display(stack_a);
	// printf("=============================================\n");
	// cw_display(stack_b);
}