NAME = printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
INCLUDE = ./
SRCS = ft_printf.c \
	ft_dispatch.c \
	ft_print_char.c\
	ft_print_hex.c \
	ft_print_number.c \
	ft_print_pointer.c \
	ft_print_string.c \
	ft_print_unsigned.c \
	ft_process_format.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re