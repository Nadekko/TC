CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strjoin.c ft_strmapi.c \
	ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_split.c \
	ft_strchr.c  ft_strlcpy.c ft_strtrim.c ft_substr.c ft_itoa.c \
	ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
	ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_striteri.c \
	ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

%.o: %.c
	$(CC) $(CFALGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
