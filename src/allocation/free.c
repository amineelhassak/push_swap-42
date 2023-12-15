#include "../../includes/headers.h"

void cw_clear_stack(t_stack *stack)
{
    t_node *tmp;
    
    while (stack->top)
    {
        tmp = stack->top;
        stack->top = stack->top->next;
        free(tmp);
        tmp = NULL;
    }
    free(stack);
}