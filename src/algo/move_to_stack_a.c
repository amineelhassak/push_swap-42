#include "../../includes/headers.h"

// void push_depart(t_stack *stack_a,t_stack *stack_b,int max)
// {
//     if (stack_b->top->index == max)
//             cw_pa(stack_a, stack_b);
//     else
//     {
//             cw_pa(stack_a, stack_b);
//             cw_ra(stack_a);
//     }
// }

void push_from_up(t_stack *stack_a, t_stack *stack_b, int max, int *check)
{
    while (stack_b->top->index != stack_a->top->index - 1)
    {
        if (!*check || stack_b->top->index > stack_a->tail->index)
        {
            cw_pa(stack_a, stack_b);
            cw_ra(stack_a);
            (*check) = 1;
        }
        else
            cw_rb(stack_b);
        if (stack_a->tail->index == max)
            (*check) = 0;
    }
    cw_pa(stack_a, stack_b);
}

void push_from_lo(t_stack *stack_a, t_stack *stack_b, int max, int *check)
{
    while (stack_b->top->index != stack_a->top->index - 1)
    {
        if (!*check || stack_b->top->index > stack_a->tail->index)
        {
            cw_pa(stack_a, stack_b);
            cw_ra(stack_a);
            (*check) = 1;
        }
        else
            cw_rrb(stack_b);
        if (stack_a->tail->index == max)
            (*check) = 0;
    }
    cw_pa(stack_a, stack_b);
}

void cw_move_to_stack_a(t_stack *stack_a,t_stack *stack_b)
{
    int max;
    int index;
    int check = 0;
    
    max = stack_a->tail->index;
    while (stack_b->len)
    {
        index = cw_search_position_max(stack_b, stack_a->top->index -1);
        if (index == 2)
            push_from_up(stack_a, stack_b,max, &check);
        else if(index == 1)
        {
            push_from_lo(stack_a, stack_b,max, &check);
        }
        while (stack_a->tail->index == stack_a->top->index - 1)
            cw_rra(stack_a);
    }
}

