#include "../../includes/headers.h"

int cw_search_position_max(t_stack *stack,int element)
{
    int len  = stack->len / 2;
    while (len > 0)
    {
        if (stack->index == element)
            return element;
        len--;
    }
    return (0);
}