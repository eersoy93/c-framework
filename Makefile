C_SOURCES = $(wildcard src/*.c)

all:
	gcc examples/example.c C_SOURCES -o examples/example

run: all
	examples/example

clean:
	rm -f examples/example
