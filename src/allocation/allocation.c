#include "../../includes/headers.h"

t_stack *cw_c_stack()//
{  //
	t_stack *new;//

	new = (t_stack *)malloc(sizeof(t_stack));//
	if (!new)//
		return (NULL);//
	new->tail = NULL;//
	new->top = NULL;//
	new->len = 0;//
	return (new);//
}

t_node *cw_c_node(int value)
{
	t_node  *new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return NULL;
	new->index = 0;
	new->next = NULL;
	new->value = value;
	return (new);
}