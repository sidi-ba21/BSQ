##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##


CC = 	gcc

NAME = 	libmy.a

SRC = 	$(wildcard *.c)

OBJ = 	$(SRC:.c=.o)

CFLAGS +=	-I ../

all : $(NAME)

%.o : %.c
	$(CC) -c $< $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^

clean :
	rm -f $(OBJ)
	rm -f *~*
	rm -f *#*

fclean: clean
	rm -f $(NAME)

re: clean all
