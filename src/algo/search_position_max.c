#include "../../includes/headers.h"

//max is stack_a->top->index - 1
int cw_search_position_max(t_stack *stack,int element)
{
    int len  = stack->len / 2;
    t_node *tmp = stack->top;
    while (tmp)
    {
        if (tmp->index == element)
        {
            if (len > 0)
                return (2);
            else    
                return (1);
        }
        tmp = tmp->next;
        len--;
    }
    return (0);
}