#include <stdio.h>

int stack [1000];
int *sp;

#define push(sp, n) (*((sp)++) = (n))
#define pop(sp) (*--(sp))

int is_balanced(char **str)
{
    char c;
}
int main(int argc, char **argv)
{

    sp = stack;

    push(sp,5);

    int x = pop(sp);
    int y = pop(sp);

    printf("%d\n", x);
    printf("%d\n", y);
    return 0;

}
