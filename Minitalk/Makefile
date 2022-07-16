# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 20:48:53 by hmartine          #+#    #+#              #
#    Updated: 2022/07/16 19:03:44 by hmartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk

LIBFT	=	./Libft/libft

PROGRAM	=	./Libft/libftprintf.a


CFLAGS	=	-Wall -Werror -Wextra -fsanitize=address

RM	=	rm -rf

SERVER_SRC	=	server.c \

CLIENT_SRC	=	client.c \

SERVER_BONUS_SRC = server_bonus.c \

CLIENT_BONUS_SRC = client_bonus.c \

OBJS	=	$(SERVER_SRC:%.c=%.o)
OBJC	=	$(CLIENT_SRC:%.c=%.o)

OBJBS	=	$(SERVER_BONUS_SRC:%.c=%.o)
OBJBC	=	$(CLIENT_BONUS_SRC:%.c=%.o)

.c.o:	gcc	${CFLAGS} -I minitalk.h -c $< -o ${<:.c=.o}

all	:	$(OBJS) $(OBJC)
			$(MAKE) -C $(LIBFT) all
			gcc	$(CFLAGS) $(SERVER_SRC) -o server ./Libft/libftprintf.a
			gcc $(CFLAGS) $(CLIENT_SRC) -o client ./Libft/libftprintf.a

bonus	:	$(OBJBS) $(OBJCS)
			$(MAKE) -C $(LIBFT) all
			gcc $(CFLAGS) $(SERVER_BONUS_SRC) -o server_bonus $(PROGRAM)
			gcc $(CFLAGS) $(CLIENT_BONUS_SRC) -o client_bonus $(PROGRAM)

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
	$(RM) $(OBJBS)
	$(RM) $(OBJBC)

fclean:	clean
	$(MAKE) -C $(LIBFT) fclean
	$(RM) server
	$(RM) client
	$(RM) server_bonus
	$(RM) client_bonus

re : fclean all

.PHONY: all clean fclean re bonus
