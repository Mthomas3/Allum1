##
## Makefile for  in /home/mart_4/rendu/CPE_2014_allum1
##
## Made by Thomas Martins
## Login   <mart_4@epitech.net>
##
## Started on  Sun Feb 22 16:59:48 2015 Thomas Martins
## Last update Sun Feb 22 18:26:50 2015 Thomas Martins
##

CC	= gcc

RM	= rm -f

NAME	= allum1

NAMEB	= allum_1

SRC	= Allum1_basic/error.c \
	  Allum1_basic/init_line.c \
	  Allum1_basic/my_strncmp.c \
	  Allum1_basic/print_pvp.c \
	  Allum1_basic/pvp.c \
	  Allum1_basic/function.c \
	  Allum1_basic/init_pvp.c \
	  Allum1_basic/my_delete.c \
	  Allum1_basic/print_ask.c \
	  Allum1_basic/print_pvp_one.c \
	  Allum1_basic/start_game.c \
	  Allum1_basic/get_next_line.c \
	  Allum1_basic/main.c \
	  Allum1_basic/my_getnbr.c \
	  Allum1_basic/print_line.c \
	  Allum1_basic/print_story.c

SRCB	= Allum1_bonus/error.c \
	  Allum1_bonus/init_line.c \
	  Allum1_bonus/my_strncmp.c \
	  Allum1_bonus/print_pvp.c \
	  Allum1_bonus/pvp.c \
	  Allum1_bonus/function.c \
	  Allum1_bonus/init_pvp.c \
	  Allum1_bonus/my_delete.c \
	  Allum1_bonus/print_ask.c \
	  Allum1_bonus/print_pvp_one.c \
	  Allum1_bonus/start_game.c \
	  Allum1_bonus/get_next_line.c \
	  Allum1_bonus/main.c \
	  Allum1_bonus/my_getnbr.c \
	  Allum1_bonus/print_line.c \
	  Allum1_bonus/print_story.c

OBJ	= $(SRC:.c=.o)

OBJB	= $(SRCB:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

bonus:	$(NAMEB)

$(NAMEB):$(OBJB)
	$(CC) -o $(NAMEB) $(OBJB)

cleanb:
	$(RM) $(OBJB)

fcleanb:	cleanb
	$(RM) $(NAMEB)

re:		fclean all

reb:		fcleanb bonus
