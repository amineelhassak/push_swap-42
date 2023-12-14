#include "../../includes/headers.h"

void cw_rroate(t_stack *stack)
{
    t_node *tail;
    t_node *before_tail;

    if (stack->top && stack->top->next)
    {
        tail = stack->tail;
        before_tail = stack->top;
        while (before_tail->next->next)
            before_tail = before_tail->next;
        tail->next  = stack->top;
        stack->top = tail;
        before_tail->next = NULL;
        stack->tail = before_tail;
    }
}