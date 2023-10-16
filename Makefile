CC = gcc -Wall -Werror -Wextra -pedantic -std=gnu89
BIN = _printf
SRCS = _printf.c holder.c print_char.c print_string.c print_percent.c print.c print_dI.c
OBJS = $(SRCS:.c = .o)

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(OBJS) -o $(BIN)
	./$(BIN)

%.o: %.c
	$(CC) -c $< -o $@




run: $(BIN)
	./$(BIN)

clean:
	$(RM) $(BIN) *.o