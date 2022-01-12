SRC 			= main.c test_atoi.c test_bzero.c test_memchr.c test_memcmp.c \
				  test_memcpy.c test_memmove.c test_memset.c test_strchr.c \
				  test_strdup.c test_strlcat.c test_strlcpy.c test_strlen.c \
				  test_strncmp.c test_strnstr.c	test_strrchr.c test_substr.c \

OBJ 			= $(SRC:.c=.o)

CC 				= gcc

NAME 			= test

${NAME}: ${OBJ}
		 		${CC}  -o ${NAME} ${OBJ} -L../ -lft

all: ${NAME}

clean:
			    rm -f ${OBJ}

fclean: clean
			    rm -f ${NAME}

.PHONY: all clean fclean
