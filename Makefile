C_SOURCES = $(wildcard src/*.c)

all:
	gcc -Wall -Wextra -Werror -std=gnu18 examples/hello.c ${C_SOURCES} -o examples/hello -lm

run: all
	examples/hello

clean:
	rm -f examples/hello
