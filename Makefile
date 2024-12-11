all: hello-world.o show-arguments.o

hello-world.o:
	g++ hello-world.cpp -o hello-world.o

show-arguments.o:
	g++ show-arguments.cpp -o show-arguments.o

.PHONY: clean
clean:
	rm -f hello-world.o show-arguments.o