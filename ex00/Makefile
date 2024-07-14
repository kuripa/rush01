# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Debug flags
DEBUG_FLAGS = -g -O0

# Target executable
TARGET = rush01

# Source files
SRCS = main.c utils.c solver.c board.c visible.c

# Object directory
OBJDIR = obj

# Object files (automatically generated from SRCS)
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

# Default target
all: $(TARGET)

# Rule to link the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Debug target
debug: CFLAGS += $(DEBUG_FLAGS)
debug: clean $(TARGET)

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Clean up object files, the executable, and the object directory
fclean: clean
	rm -rf $(OBJDIR)

# Phony targets
.PHONY: all clean fclean debug
