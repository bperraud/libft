SRCS			= main.c main_atoi.c main_bzero.c main_memchr.c main_memcmp.c \
				  main_memcpy.c main_memmove.c main_memset.c main_strchr.c \
				  main_strdup.c main_strlcat.c main_strlcpy.c main_strlen.c \
				  main_strncmp.c main_strnstr.c	main_strrchr.c \

OBJS			= $(SRCS:.c=.o)

CC 				= gcc

NAME 			= test

${NAME}: ${OBJS}
		 		${CC}  -o ${NAME} ${OBJS} -L../ -lft

all: ${NAME}

clean:
			    rm -f ${OBJS}

fclean: clean
			    rm -f ${NAME}

.PHONY: all clean fclean
