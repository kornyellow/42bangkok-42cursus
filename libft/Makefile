CC				= cc
CFLAGS			= -Wall -Wextra -Werror

LIBC			= ar -rc
LIBR			= ranlib
NAME			= libft.a

SOURCES			= $(wildcard *.c)
OBJECTS			= $(patsubst %.c, %.o, $(SOURCES))

all: $(NAME)

re: fclean all

$(NAME): $(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS)
	$(LIBR) $(NAME)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
