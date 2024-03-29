# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/13 16:33:54 by rliou-ke          #+#    #+#              #
#    Updated: 2016/04/28 12:35:39 by rliou-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isascii.c ft_memdel.c ft_putstr.c ft_strequ.c \
	ft_strncmp.c ft_strtrim.c ft_isdigit.c ft_memmove.c	\
	ft_putstr_fd.c	ft_striter.c ft_strncpy.c ft_tolower.c \
	ft_isprint.c ft_memset.c ft_strcat.c ft_striteri.c \
	ft_strnequ.c ft_toupper.c ft_atoi.c ft_atol.c ft_itoa.c \
	ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnew.c \
	ft_bzero.c ft_memalloc.c ft_putchar_fd.c ft_strclr.c \
	ft_strnstr.c ft_memccpy.c ft_putendl.c ft_strdup.c \
	ft_strcmp.c ft_strlen.c ft_strrchr.c \
	ft_putendl_fd.c ft_strcpy.c ft_strmap.c \
	ft_isalnum.c ft_memcmp.c ft_putnbr.c ft_strdel.c \
	ft_strmapi.c ft_strstr.c ft_isalpha.c \
	ft_memcpy.c ft_putnbr_fd.c ft_strncat.c ft_strsub.c \
	ft_strsplit.c ft_strlcat.c ft_memchr.c ft_swapstr.c \
	ft_swap.c	ft_lstnew.c ft_lstdelone.c \
	ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	ft_lstappend.c ft_free_lst.c \
	ft_dlstadd.c ft_dlstappend.c ft_dlstnew.c ft_free_dlst.c \
	ft_putdlst.c ft_isblank.c ft_epurstr.c ft_dectobin.c \
	ft_power.c ft_tablen.c ft_taballoc.c \
	ft_tabdel.c ft_getnbr.c ft_error.c ft_lstsplit.c \
	ft_tabdup.c ft_lstlen.c ft_isnumber.c ft_strrev.c
OBJDIR = obj
OBJ = $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all : $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^

$(OBJ) : | $(OBJDIR)

$(OBJDIR) : 
	@mkdir -p $@

$(OBJDIR)/%.o : %.c
	@gcc $(CFLAGS) -I. -c $< -o $@

clean :
	@rm -fr $(OBJDIR)

fclean : clean
	@rm -f $(NAME)

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
