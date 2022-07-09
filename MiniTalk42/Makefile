SERVER	=	server
CLIENT	=	client
NAME	=	$(SERVER) $(CLIENT)

LIBFT	=	./libft

CFLAGS	=	-Wall -Werror -Wextra -I

RM	=	rm -rf

SERVER_SRC	=	./mandatory/server.c \
			./utils.c
CLIENT_SRC	=	./mandatory/client.c \
			./utils.c

SERVER.O	= $(SERVER_SRC:%.c=%.o)
CLIENT.O	= $(CLIENT_SRC:%.c=%.o)
OBJS	=	$(SERVER_O) $(CLIENT_O)

HEADER	=	./inc

NAME	:	$(SERVER) $(CLIENT)
all	:	$(NAME)

%.o: %.c
	gcc $(CFLAGS) $(HEADER) -o $@ -c $^

$(SERVER):	$(SERVER_O)
		$(MAKE) bonus -C $(LIBFT)
		gcc $(SERVER_O) ./libft_libft.a -o $(SERVER)


$(CLIENT):	$(CLIENT_O)
		$(MAKE) bonus -C $(LIBFT)
		gcc $(CLIENT_O) ./libft_libft.a -o $(CLIENT)

clean:
	$(MAKE) -C $(LIBFT) clean
	rm -f $(OBJS)

fclean:	clean
	$(NAME) -C $(LIBFT) fclean

re: fclean all

.PHONY: all bonus libft clean fclean re