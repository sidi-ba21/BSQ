##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##


CC = 	gcc

NAME = 	bsq

SRC = 	$(wildcard *.c)

OBJ = 	$(SRC:.c=.o)

CFLAGS +=	-I includes -Wall -Wextra

LDFLAGS	+=	-L lib/my -lmy

all : $(NAME)

$(NAME) : $(SRC)
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(LDFLAGS)

clean :
	rm -f $(OBJ)
	rm -f *~*
	rm -f *#*

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re: fclean all
