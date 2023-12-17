#include "../../includes/headers.h"

void cw_push(t_stack *stack_1, t_stack *stack_2)
{
    t_node *new_top;
    if (!stack_1->top)
        return ;
    // dans la premiere push
    if (!stack_2->top)
    {
        new_top = stack_1->top;
        stack_1->top = stack_1->top->next;
        stack_2->top = new_top;
        stack_2->tail = new_top;
        stack_2->tail->next = NULL;
        stack_1->len--;
        stack_2->len++;
        return ;
    }
    new_top = stack_1->top;
    stack_1->top = stack_1->top->next;
    new_top->next = stack_2->top;
    stack_2->top = new_top;
    stack_1->len--;
    stack_2->len++;
}
