#ifndef STRACTUS_H
# define STRACTUS_H

typedef struct s_node
{
	int		index;
	int		value;
	struct	s_node *next;
} t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*tail;
	int		len;
} t_stack;
#endif