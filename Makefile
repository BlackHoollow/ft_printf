NAME	=	libftprintf.a

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

SRC_D	=	./src/
SRC		=	$(SRC_D)ft_printf.c \
			$(SRC_D)process.c \
			$(SRC_D)parse.c

OBJ_D	=	.obj/
OBJ		=	$(SRC:$(SRC_D)%.c=$(OBJ_D)%.o)

LIBFT_D	=	./libft/
LIBFT	=	$(LIBFT_D)libft.a

INC_D	=	./inc/

INC		=	-I$(INC_D) \
			-I$(LIBFT_D)

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	@libtool -static -o $@ $^
	@printf "\n\033[0;32m\033[1m%-24s..%s\n\n\033[0m" "$@" "is complete !"
	
$(LIBFT) :
	@make -C $(LIBFT_D)

$(OBJ_D)%.o : $(SRC_D)%.c
	@mkdir -p $(OBJ_D)
	@$(CC) $(FLAGS) $(INC) -o $@ -c $<
	@printf "\033[0m%-24s..\033[1m%s\n" "$<" "$@ !"

clean :
	@make -C $(LIBFT_D) clean
	@/bin/rm -rf $(OBJ_D);

fclean : clean
	@make -C $(LIBFT_D) fclean
	@/bin/rm -rf $(NAME);
	@/bin/rm -rf ft_printf_test;

test : all
	gcc ft_printf_test.c -I./inc/ -I./libft/ -L. -lftprintf -o ft_printf_test

re : fclean all
