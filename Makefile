# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 20:48:53 by hmartine          #+#    #+#              #
#    Updated: 2022/07/14 21:20:32 by hmartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk

LIBFT	=	./Libft/libft

CFLAGS	=	-Wall -Werror -Wextra -fsanitize=address

RM	=	rm -rf

SERVER_SRC	=	server.c \

CLIENT_SRC	=	client.c \

OBJS	= $(SERVER_SRC:%.c=%.o)
OBJC	= $(CLIENT_SRC:%.c=%.o)

.c.o:	gcc	${CFLAGS} -I minitalk.h -c $< -o ${<:.c=.o}

all	:	$(OBJS) $(OBJC)
			$(MAKE) -C $(LIBFT) all
			gcc	$(CFLAGS) $(SERVER_SRC) -o server ./Libft/libftprintf.a
			gcc $(CFLAGS) $(CLIENT_SRC) -o client ./Libft/libftprintf.a

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $^

SERVER	:	$(OBJS)
		$(MAKE) $(LIBFT) all
		gcc $(CFLAGS) $(SERVER_SRC) -o server ./Libft/libftprintf.a

CLIENT	:	$(OBJC)
		$(MAKE) $(LIBFT) all
		gcc $(CFLAGS) $(CLIENT_SRC) -o client ./Libft/libftprintf.a

clean:
	$(MAKE) -C $(LIBFT) clean
	$(RM) $(OBJS)
	$(RM) $(OBJC)

fclean:	clean
	$(MAKE) -C $(LIBFT) fclean
	$(RM) server
	$(RM) client

re : fclean all

.PHONY: all clean fclean re
