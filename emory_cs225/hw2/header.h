#ifndef EXTERN
#define EXTERN extern
#endif

#define SIZE_OF_SEG 256
#define BITS_PER_SEG (8*SIZE_OF_SEG*sizeof(int))

typedef struct _seg {
    int bits[SIZE_OF_SEG];

    struct _seg *next;
} seg;

EXTERN int NSegs;
EXTERN seg *head;

EXTERN void clear_all();
EXTERN void sieve_of_e(int n);
EXTERN int count_primes(int n);
EXTERN void print_primes(int n);
