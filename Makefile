# Makefile for rush01 project

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Debug flags
DEBUG_FLAGS = -g -O0

# Target executable
TARGET = rush01

# Source directory
SRCDIR = ex00

# Source files
SRCS = $(SRCDIR)/main.c $(SRCDIR)/utils.c $(SRCDIR)/solver.c

# Object directory
OBJDIR = obj

# Object files
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

# Default target
all: $(TARGET)

# Rule to link the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Debug target
debug: CFLAGS += $(DEBUG_FLAGS)
debug: clean $(TARGET)

# Clean up object files and the executable
clean:
	rm -f $(OBJS)

# Clean up object files, the executable, and the object directory
fclean: clean
	rm -f $(TARGET)
	rm -rf $(OBJDIR)

# Phony targets
.PHONY: all clean fclean debug
