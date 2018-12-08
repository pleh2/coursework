#include <stdio.h>
#include <stdlib.h>
#include "header.h"

unsigned int prime[MAX];

int main(int argc, char **argv)
{
    int inp, n, total = 0;
    if (argc != 2) {
	fprintf(stderr, "Usage: %s N\n", argv[0]);
	exit(1);
    } else {
	sscanf(argv[1], "%d", &n);
    }

    // BEGIN Linked List init
    NSegs = n/(2*BITS_PER_SEG) + 2;

    head = NULL;

    for (i = 0; i < NSegs; i++) {
	p = (seg*) malloc(sizeof(seg));
	p->next = head;
	head = p;
    }

    ClearAll();
    sieve_of_e(n);
    total = count_primes(n);

    printf("# of primes found: %d\n", total);

    if (total <= 100) {
	print_primes(n);
    }

    while(1) {
	printf("Enter number >> ");

	if (scanf("%d", &inp) == EOF)
	    break;

	factor(inp);
    }
    printf("Done.\n");
}
