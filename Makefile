all: hello-world.o show-arguments.o

hello-world.o:
	$(CXX) hello-world.cpp Person.cpp Date.cpp -o hello-world.o

show-arguments.o:
	$(CXX) show-arguments.cpp -o show-arguments.o

.PHONY: clean
clean:
	rm -f hello-world.o show-arguments.o