# NAMES
CHECK_NAME = checker
PS_NAME = push_swap

# DIRECTORY
PS_DIR = ./push_swap_srcs
CHECK_DIR = ./checker_srcs
LIBFT_DIR = ./libft

# LIBRARY
LIBFT_LIB = ./lib/libft.a

# SOURCES
PS_SRCS = $(wildcard $(PS_DIR)/srcs/*.c)
CHECK_SRCS = $(wildcard $(CHECK_DIR)/srcs/*.c)

# OBJECTS
PS_OBJS = $(PS_SRCS:.c=.o)
CHECK_OBJS = $(CHECK_SRCS:.c=.o)

# INCLUDES
PS_INC = $(PS_DIR)/inc/
CHECK_INC = $(CHECK_DIR)/inc/
LIBFT_INC = $(LIBFT_DIR)/inc/

# COMPILATION
CC = clang
FLAGS = -Wall -Wextra -Werror

# RULES
all : $(PS_NAME)

$(PS_NAME) : $(PS_OBJS) $(LIBFT_LIB)
	$(CC) $(FLAGS) -o $(PS_NAME) $(PS_OBJS) $(LIBFT_LIB)

$(PS_DIR)/srcs/%.o : $(PS_DIR)/srcs/%.c
	$(CC) -o $@ -c $< -I$(LIBFT_INC) -I$(PS_INC)

$(LIBFT_LIB) :
	rm -rf $(LIBFT_LIB)
	make -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)/libft.a ./lib/

clean : 
	rm -f $(PS_OBJS)
	make clean -C $(LIBFT_DIR)

fclean : clean
	rm $(PS_NAME)
	rm $(LIBFT_LIB)

re : fclean all