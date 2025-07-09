NAME = libftprintf.a

CFLAG = -Wall -Werror -Wextra
CC = cc

SRC = ft_printf.c ft_printf_pointer.c ft_printf_putchar.c ft_printf_puthexadecimal.c \
      ft_printf_putnumber.c \
	

OBJ = $(SRC:.c=.o)
INCLUDE = ft_prinft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
