CC = gcc -Wall -Werror -Wextra -pedantic -std=gnu89
IN = _printf
SRCS = _printf.c main.c
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
