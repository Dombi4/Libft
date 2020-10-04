FLAGS = -Wall -Wextra -Werror -I

NAME := libft.a
HEADER = libft.h
SRC := ft_lstdel.c ft_putchar_fd.c ft_strdup.c ft_strnstr.c ft_lstdelone.c ft_putendl.c ft_strequ.c ft_strrchr.c ft_atoi.c ft_lstiter.c ft_putendl_fd.c ft_striter.c ft_strsplit.c ft_bzero.c ft_lstmap.c ft_putnbr.c ft_striteri.c ft_strstr.c ft_isalnum.c ft_lstnew.c ft_putnbr_fd.c ft_strsub.c ft_isalpha.c ft_memalloc.c ft_putstr.c ft_strjoin.c ft_strtrim.c ft_memccpy.c ft_putstr_fd.c ft_strlcat.c ft_tolower.c ft_isascii.c ft_memchr.c ft_strcat.c ft_strlen.c ft_memcmp.c ft_strmap.c ft_toupper.c ft_isdigit.c ft_strchr.c ft_strmapi.c ft_strclr.c ft_strncat.c ft_isprint.c ft_memdel.c ft_strcmp.c ft_strncmp.c ft_memmove.c ft_strncpy.c ft_itoa.c ft_memset.c ft_strcpy.c ft_strnequ.c ft_lstadd.c ft_putchar.c ft_strdel.c ft_strnew.c ft_memcpy.c
OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): %.o: %.c
	gcc $(FLAGS) $(HEADER) -o $@ -c $<

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
