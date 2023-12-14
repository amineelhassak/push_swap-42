#ifndef STRACTUS_H
#define STRACTUS_H

typedef struct s_node{
	int	index;
	int value;
	int position;
	int move;
	int move_fin;
	int pos_fin;
	struct s_node *next;
}t_node;

typedef struct s_stack{
	t_node *top;
	t_node *tail;
	int len;
}t_stack;

#endif 