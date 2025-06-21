CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libft.a
SRCS = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c \
ft_memchr.c ft_memcpy.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c \
ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c \
ft_strlen.c ft_strnstr.c ft_tolower.c ft_calloc.c ft_substr.c ft_strjoin.c


OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re soi

all:$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re: fclean all

so:$(OBJS)
	(CC) -shared -o libft.so $(OBJS)
