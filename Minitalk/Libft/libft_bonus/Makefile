# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 14:50:36 by hmartine          #+#    #+#              #
#    Updated: 2022/04/02 13:26:35 by hmartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Libft/ft_isalpha.c \
		Libft/ft_isdigit.c \
		Libft/ft_isalnum.c \
		Libft/ft_isascii.c \
		Libft/ft_isprint.c \
		Libft/ft_strlen.c \
		Libft/ft_memset.c \
		Libft/ft_bzero.c \
		Libft/ft_memcpy.c \
		Libft/ft_memmove.c \
		Libft/ft_strlcpy.c \
		Libft/ft_strlcat.c \
		Libft/ft_toupper.c \
		Libft/ft_tolower.c \
		Libft/ft_strchr.c \
		Libft/ft_strrchr.c \
		Libft/ft_strncmp.c \
		Libft/ft_memchr.c \
		Libft/ft_memcmp.c \
		Libft/ft_strnstr.c \
		Libft/ft_atoi.c \
		Libft/ft_calloc.c \
		Libft/ft_strdup.c \
		Libft/ft_substr.c \
		Libft/ft_strjoin.c \
		Libft/ft_strtrim.c \
		Libft/ft_split.c \
		Libft/ft_itoa.c \
		Libft/ft_strmapi.c \
		Libft/ft_striteri.c \
		Libft/ft_putchar_fd.c \
		Libft/ft_putstr_fd.c \
		Libft/ft_putendl_fd.c \
		Libft/ft_putnbr_fd.c \
		ft_printf.c \
		prt_nbr_base.c \
		prt_put.c \



OBJ = $(SRC:%.c=%.o) 

NAME = libftprintf.a

LIBFT = Libft

FLAGS = -Wall -Werror -Wextra

.c.o: ${CC} ${FLAGS} -I ft_printf.h -c ${<:.c =.o}

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

clean:
	@rm -f $(OBJ)
	@make fclean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

testmain: fclean all
	gcc main.c -L. -lftprintf $(FLAGS) && ./a.out

re: fclean all

.PHONY: all clean fclean

