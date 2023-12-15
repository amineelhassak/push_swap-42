NAME = p_swap
FX = push_swap
SRCS = $(wildcard src/algo/*.c) $(wildcard src/allocation/*.c) $(wildcard src/instra/*.c)\
		$(wildcard src/operations/*.c) $(wildcard src/pars/*.c)   $(wildcard *.c) $(wildcard src/position/*.c)
 
MAKE =@make
OBJ = $(SRCS:.c=.o)
BATHLIB = ./lib
BATHLIB_A = ./lib/libft.a
BATHHEADES = includes/headers.h
MAKELIB = $(MAKE) -C $(BATHLIB) > /dev/null
CLAEBLIB =$(MAKE) clean -C $(BATHLIB) > /dev/null
FCLAEBLIB =$(MAKE) fclean -C $(BATHLIB) > /dev/null
RELIB = $(MAKE) re -C $(BATHLIB)
MSGSUCC = "make successfully"
CCFLAGC= cc -g -Wall -Wextra -Werror
AR = @ar -rc
RM = @rm -rf
all: $(NAME)

$(NAME): makelib $(BATHHEADES)   succ
	$(CCFLAGC) $(SRCS) -o $(FX) $(BATHLIB_A)

# 

	
succ:
	echo $(MSGSUCC)
# -----------------------libft------------------------
makelib:
	$(MAKELIB)
cleanlib:
	$(CLAEBLIB)
fcleanlib:
	$(FCLAEBLIB)
relib:
	$(RELIB)
clean:cleanlib
	$(RM) $(FX)
fclean:clean fcleanlib
re:fclean all

.PHONY:cleanlib relib fcleanlib makelib