##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -rf

NAME	=	my_ls

CFLAGS	+=	-W -Wall -Wextra -I./include
LDFLAGS += 	-I./my/include/ -lmy -L. -g

SRC	=	my_ls.c

OBJ	=	$(SRC:.c=.o)

all: compil

compil:	$(OBJ)
	(cd ./lib/my && make)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

valgrind: $(SRC)
	$(CC) -g $(NAME) $(SRC) $(CFLAGS) $(LDFLAGS)

clean:
	(cd ./lib/my && make clean)
	$(RM) $(NAME)

fclean:
	(cd ./lib/my && make fclean)
	$(RM) $(OBJ)
	$(RM) libmy.a
	$(RM) ./my/libmy.a
	$(RM) ./lib/my/libmy.a

re:	fclean all

PHONY:	re all clean fclean
