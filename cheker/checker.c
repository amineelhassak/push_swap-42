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
        if(!ft_strncmp(str, "rrb", 3))
            rrb(stack_b,0);
        else if(!ft_strncmp(str, "rra", 3))
            rra(stack_a,0);
        else if(!ft_strncmp(str, "rrr", 3))
            rrr(stack_a, stack_b,0);
        else if (!ft_strncmp(str , "ra",2))
            ra(stack_a,0);
        else if (!ft_strncmp(str,"rb",2))
            rb(stack_b,0);
        else if (!ft_strncmp(str, "rr", 2))
            rr(stack_a, stack_b,0);
        else if(!ft_strncmp(str, "sa", 2))
            sa(stack_a,0);
        else if(!ft_strncmp(str, "sb", 2))
            sb(stack_b,0);
        else if(!ft_strncmp(str,"ss",2))
            ss(stack_a, stack_b, 0);
    }
    if(!cw_is_sort(stack_a))
        return (false);
    return (true);
}

