NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC = \
	ft_printf_charstring.c \
	ft_printf_hexadecimalsptr.c \
	ft_printf_number.c \
	ft_printf_unsigned_number.c \
	ft_printf.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean: 
	-rm -f *.o

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re