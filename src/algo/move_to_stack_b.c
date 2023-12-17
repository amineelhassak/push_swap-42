#include "../../includes/headers.h"

void cw_move_to_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	int index1 = stack_a->len / 3;
	int index2 = stack_a->len / 6;
	int save_last = 0;
	/* int c =1;
	// printf("\nIn Top %d :::[[%d      < ---%d--- >   %d]]\n",c,save_last,index2 - save_last,index2);
	// printf("\nin Tail  %d :::[[ %d   	< --- %d --- >   %d]](len_res :: %d)\n",c,index2,index1-index2,index1,stack_a->len - index1);
	// c++;
	// int len = stack_a->len;*/
	while (stack_a->len != 3)
	{
		if (stack_a->top->index < index1)
		{
			if (stack_a->top->index < index2)
				pb(stack_a, stack_b, 1);
			else
			{
				pb(stack_a, stack_b, 1);
				rb(stack_b, 1);
			}
		}
		else
			ra(stack_a, 1);
		if (index1 - 1 == stack_b->len)
		{	
				save_last = index1;
				index1 += stack_a-> len / 3;
				index2 = stack_a-> len / 6 + save_last;
				// printf("\n\n\nin ToP   %d :::[[%d      < --- %d --- >   %d]]\n",c,save_last,index2 - save_last,index2);
				// printf("\nin Tail  %d :::[[ %d   	< --- %d --- >   %d]](len_res :: %d)\n",c,index2,index1-index2,index1,len-index1);
				// c++;
		}
	}
}

void	cw_move_mid_stack_b(t_stack *stack_a,t_stack *stack_b)
{
    int     len;

	len = stack_a->len;
    while (len > 0)
    {
        if (stack_a->top->index < 3)
            pb (stack_a, stack_b, 1);
        else
            ra (stack_a, 1);
		len--;
    }
}