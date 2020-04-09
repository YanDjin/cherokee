CC = gcc

CFLAGS = -Wall -Wextra -Werror

THREADS = -pthread

NAME = http_server_exec

RM = rm -rf

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $<

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(THREADS) -o $@ $^

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re	: fclean all