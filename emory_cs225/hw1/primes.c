#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "header.h"

#define SetBit(A,k) (A[(k/32)] |= (1 << (k%32)))
#define ClearAll() (memset(prime, 0, sizeof(*prime) * MAX))
#define IsPrime(A,k) ((A[(k/32)] & (1 << (k%32))) == 0 ? 1 : 0)

void sieve_of_e(int n)
{
    ClearAll(); // initialize
    unsigned int i, k;

    // 0 & 1 are not candidates
    SetBit(prime,1);

    for (i = 2; i <= n; i++) 
	if (IsPrime(prime,i)) 
	    for (k = i*2; k <= n; k=k+i)
		SetBit(prime,k);
}

int count_primes(int n)
{
    unsigned int i, total = 0;
    for (i = 1; i <= n; i++) {
	if (IsPrime(prime, i))
	    total++;
    }
    return total;
}

void print_primes(int k1, int k2, int n)
{
    unsigned int i, spotted = 0;
    for (i = 0; i <= n; i++) {
	if ((spotted >= k1 && spotted <= k2) && IsPrime(prime,i))
	    printf("%d ", i);
	if (IsPrime(prime, i))
	    spotted++;
    }
    putchar('\n');
}
