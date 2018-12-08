all: main
main: main.o primes.o
	gcc -Wall -g -o main $^
%.o: %.c
	gcc -Wall -g -c $<

.PHONY: all clean
clean:
	rm -vf main main.o primes.o
