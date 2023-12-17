NAME = push_swap
CHECK = checker

SRCS = ./src/algo/big_sort.c ./src/algo/indexing.c ./src/algo/is_sort.c ./src/algo/max_index.c ./src/algo/mid_sort.c \
		./src/algo/move_to_stack_a.c ./src/algo/move_to_stack_b.c ./src/algo/PlanSort.c ./src/algo/push_lower.c \
		./src/algo/push_upper.c ./src/algo/search_position_max.c ./src/algo/small_sort.c ./src/allocation/allocation.c \
		./src/allocation/free.c ./src/instra/display.c ./src/instra/pop.c ./src/instra/push.c ./src/instra/rev_rotate.c \
		./src/instra/rotate.c ./src/instra/stack_add.c ./src/instra/swap.c ./src/operations/pa.c ./src/operations/pb.c \
		./src/operations/ra.c ./src/operations/rb.c ./src/operations/rr.c ./src/operations/rra.c ./src/operations/rrb.c \
		./src/operations/rrr.c ./src/operations/sa.c ./src/operations/sb.c ./src/operations/ss.c ./src/pars/atoi.c \
		./src/pars/check.c ./src/pars/is_empty.c ./src/pars/is_spaces.c ./src/pars/n_double.c ./src/pars/pars.c

SRCS_B = ./get_next_line/get_next_line_utils.c ./get_next_line/get_next_line.c ./cheker/checker.c

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

RM = @rm -f

CC = cc -Wall -Wextra -Werror

MAKELIB = @make -C ./lib

CLEAN_LIB = @make clean -C ./lib
FCLEAN_LIB = @make fclean -C ./lib
PATHLIB_A = ./lib/libft.a

all:color $(NAME) msg

color:
	@echo "\033[0;32m"
msg:
	@echo "\n\n\n                                               ミ★---------->\              ★★★               /<------------ミ★"
	@echo "                                                ミ★---------->\             ★★★              /<------------ミ★\n"
	@echo "                                                 ミ★---------->\   s͢ u͢ c͢ c͢ e͢ s͢ s͢ f͢ u͢ l͢ l y  /<------------ミ★"
	@echo "                                                  ミ★---------->\                          /<------------ミ★\n"
	@echo "                                                   ミ★---------->\          ★★★           /<------------ミ★"
	@echo "                                                    ミ★---------->\         ★★★          /<------------ミ★\n"
$(NAME): $(OBJS)
	$(MAKELIB)
	$(CC) ./main.c -o $(NAME) $(OBJS) $(PATHLIB_A)

bonus: $(OBJS_B) $(NAME)
	$(CC) ./cheker/main.c -o $(CHECK) $(OBJS_B) $(OBJS) $(PATHLIB_A)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	$(CLEAN_LIB)
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(FCLEAN_LIB)
	$(RM) $(NAME) $(CHECK)

re: fclean all

.PHONY: clean
