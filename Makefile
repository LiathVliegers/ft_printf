NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJDIR = printfobjs
SRC = \
	ft_printf_charstring.c \
	ft_printf_hexadecimalsptr.c \
	ft_printf_number.c \
	ft_printf_unsigned_number.c \
	ft_printf.c
OBJS = $(SRC:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJDIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o : %.c
	cc -c $(CFLAGS) -o $@ $^

clean: 
	-rm -rf $(OBJDIR)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re