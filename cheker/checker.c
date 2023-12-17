#include "checker.h"

int ft_strcmp(char *src,char *dst)
{
    while (*src && *dst && *src == *dst)
    {
        src++;
        dst++;
    }
    return ((*src) - (*dst));
}

bool is_valide(char *move)
{
    char *str[] = {"rr","ra","rb","rra","rrb","rrr","sa","sb","ss"};
    int i = -1;
    while (++i < 9)
    {  
        if(!ft_strcmp(move , str[i]))
            return false;
    }
    return true;
}

bool sort_by_arg(t_stack *stack_a,t_stack *stack_b)
{
    char *str;

    while ((str = get_next_line(0)))
    {
        if (!is_valide(str))
            return  (false);
        if (!ft_strcmp(str, "rrb\n"))
            rrb(stack_b,0);
        else if (!ft_strcmp(str, "rra\n"))
            rra(stack_a,0);
        else if( !ft_strcmp(str, "rrr\n"))
            rrr(stack_a, stack_b,0);
        else if (!ft_strcmp(str , "ra\n"))
            ra(stack_a,0);
        else if (!ft_strcmp(str,"rb\n"))
            rb(stack_b,0);
        else if (!ft_strcmp(str, "rr\n"))
            rr(stack_a, stack_b,0);
        else if(!ft_strcmp(str, "sa\n"))
            sa(stack_a,0);
        else if (!ft_strcmp(str, "sb\n"))
            sb (stack_b,0);
        else if (!ft_strcmp(str,"ss\n"))
            ss(stack_a, stack_b, 0);
        else if(!ft_strcmp(str,"pa\n"))
            pa(stack_a,stack_b,0);
        else if(!ft_strcmp(str,"pb\n"))
            pb(stack_a,stack_b,0);
    }
    if (!stack_a->top)
		return (false);
    if (!cw_is_sort(stack_a))
        return (false);
    return (true);
}

