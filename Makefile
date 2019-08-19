NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = *.c

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME)
	
	$(SRCS:.c=.o)
	ranlib $(NAME)

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)
re: fclean all
