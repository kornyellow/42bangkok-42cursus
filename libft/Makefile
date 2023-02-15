CC				= cc
CFLAGS			= -Wall -Wextra -Werror

LIBC			= ar -rc
LIBR			= ranlib
LIBRARY			= libft.a

SOURCES			= $(wildcard *.c)
OBJECTS			= $(patsubst %.c, %.o, $(SOURCES))

all: $(LIBRARY)

re: fclean all

$(LIBRARY): $(OBJECTS)
	$(LIBC) $(LIBRARY) $(OBJECTS)
	$(LIBR) $(LIBRARY)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(LIBRARY)
