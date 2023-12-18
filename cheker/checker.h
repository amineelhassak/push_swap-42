#ifndef CHECKER_H
#define CHECKER_H

#define MSGERRR "KO\n"
#define MSGSUCC "OK\n"
#include "../includes/headers.h"
#include "../get_next_linee/get_next_line.h"

bool sort_by_arg(t_stack *stack_a,t_stack *stack_b,int *index);
int ft_strcmp(char *src,char *dst);
#endif