# NAMES
CHECK_NAME = checker
PS_NAME = push_swap
LIBFT = libft.a

# DIRECTORY
PS_DIR = ./srcs/push_swap
CHECK_DIR = ./srcs/checker
LIBFT_DIR = ./libft/

# LIBRARY
LIBFT_LIB = ./lib/libft.a

# SOURCES
PS_SRCS = $(wildcard $(PS_DIR)/*.c)
CHECK_SRCS = $(wildcard $(CHECK_DIR)/*.c)

# OBJECTS
PS_OBJS = $(PS_SRCS:.c=.o)
CHECK_OBJS = $(CHECK_SRCS:.c=.o)

# INCLUDES
PS_INC = ./inc/push_swap/
CHECK_INC = ./inc/checker/
LIBFT_INC = $(LIBFT_DIR)inc/

# COMPILATION
CC = clang
FLAGS = -Wall -Wextra -Werror

# RULES
all : $(PS_NAME)

$(PS_NAME) : $(LIBFT) $(PS_OBJS)
	$(CC) $(FLAGS) -o $(PS_NAME) $(PS_OBJS) $(LIBFT_LIB)

$(PS_OBJS):
	$(CC) -g -I$(PS_INC) -I$(LIBFT_INC) -o $(PS_OBJS) -c $(PS_SRCS)

$(LIBFT) :
	rm -rf $(LIBFT_LIB)
	make -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)libft.a ./lib/

clean : 
	rm -rf $(PS_OBJS)

fclean : clean
	rm -rf $(PS_NAME)

re : fclean all