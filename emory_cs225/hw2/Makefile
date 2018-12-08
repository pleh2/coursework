main: main.o primes.o
	gcc -Wall -g -o main $^
%.o: %.c
	gcc -Wall -g -c $<

.PHONY: clean
clean:
	rm -vf main main.o primes.o
