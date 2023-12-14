#include "../../includes/headers.h"

t_stack *cw_c_list()
{   
    t_stack *new;
    new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->tail = NULL;
    new->top = NULL;
    new->len = 0;
    return (new);
}

t_node *cw_c_node(int value)
{
    t_node *new;
    new = (t_node *)malloc(sizeof(t_node));
    new->index = 0;
    new->next = NULL;
    new->value = value;
    new->position = -1;
    new->pos_fin = -1;
    new->move_fin = -1;
    new->move = -1;
    return (new);
}