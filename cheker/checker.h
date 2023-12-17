#ifndef CHECKER_H
#define CHECKER_H

#define MSGERRR "\033[0;91mKO\n\033[0m"
#define MSGSUCC "\033[0;91mOK\n\033[0m"
#include "../includes/headers.h"
#include "../get_next_linee/get_next_line.h"

bool sort_by_arg(t_stack *stack_a,t_stack *stack_b);
bool is_valide(char *move);
int ft_strcmp(char *src,char *dst);
#endif