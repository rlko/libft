# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/13 16:33:54 by rliou-ke          #+#    #+#              #
#    Updated: 2014/11/30 16:06:22 by rliou-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isascii.c ft_memdel.c ft_putstr.c ft_strequ.c \
	ft_strncmp.c ft_strtrim.c ft_isdigit.c ft_memmove.c	\
	ft_putstr_fd.c	ft_striter.c ft_strncpy.c ft_tolower.c \
	ft_isprint.c ft_memset.c ft_strcat.c ft_striteri.c \
	ft_strnequ.c ft_toupper.c ft_atoi.c ft_itoa.c \
	ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnew.c \
	ft_bzero.c ft_memalloc.c ft_putchar_fd.c ft_strclr.c \
	ft_strnstr.c ft_memccpy.c ft_putendl.c ft_strdup.c \
	ft_strcmp.c ft_strlen.c ft_strrchr.c \
	ft_putendl_fd.c ft_strcpy.c ft_strmap.c \
	ft_isalnum.c ft_memcmp.c ft_putnbr.c ft_strdel.c \
	ft_strmapi.c ft_strstr.c ft_isalpha.c \
	ft_memcpy.c ft_putnbr_fd.c ft_strncat.c ft_strsub.c \
	ft_strsplit.c ft_strlcat.c ft_memchr.c \
	
# Bonus
SRCS += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
		ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o) 

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[32m $(NAME) has been created !"

$(OBJS) : $(SRCS)
	@gcc $(CFLAGS) -c $(SRCS) -I.

clean :
	@rm -f $(OBJS)
	@echo "\033[31m objects files have been removed !"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[31m $(NAME) has been removed !"

re : fclean all

chocobo :
	@echo "　　 ＿＿"
	@echo "　 ／―＜／)"
	@echo "　/ ＿　 二フ　　＿"
	@echo " ヘ(●)　　ノ　 ／ /"
	@echo "(＿)￣_フ＜＿_/ ∠＿"
	@echo "　　＞／￣￣フ∠＿／"
	@echo "　 幺(　　　フ＿＿＞"
	@echo "　 ヽ ＼＿＿＞ノ"
	@echo "　　 ＼＿＿＿ノ"
	@echo "　　　 ＿))ニ)"
	@echo "　　 ∠∠)＿＞"
