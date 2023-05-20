CC = gcc
CFLAGS = -Wall

SRCS = main.c turing_machine.c tape.c rules.c
OBJS = $(SRCS:.c=.o)

EXEC = turing_machine

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)