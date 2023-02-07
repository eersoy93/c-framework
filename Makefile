
all:
	gcc examples/example.c src/io.c src/maths.c -o examples/example

clean:
	rm -f examples/example
