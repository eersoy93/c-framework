C_SOURCES = $(wildcard src/*.c)

all:
	gcc -Wall -Wextra -Werror examples/example.c ${C_SOURCES} -o examples/example -lm

run: all
	examples/example

clean:
	rm -f examples/example
