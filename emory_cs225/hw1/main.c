#include <stdio.h>
#include <stdlib.h>
#include "header.h"

unsigned int prime[MAX];

int main(int argc, char **argv)
{
    int n, total = 0;
    if (argc != 2) {
	printf("Usage: ./main N\n");
	exit(-1);
    } else {
	sscanf(argv[1], "%d", &n);
    }

    sieve_of_e(n);
    total = count_primes(n);

    printf("# of primes: %d\n", total);
    print_primes(1, 10, n);
}
