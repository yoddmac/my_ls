##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RMF	=	rm -rf

NAME	=	libmy.a

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

all:	compil

compil:	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp libmy.a ../..
clean:
	$(RMF) $(OBJ)

fclean:
	$(RMF) $(NAME)

re:	fclean all

.PHONY:	re all clean fclean
