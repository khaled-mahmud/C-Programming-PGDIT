#include <stdio.h>

#define PRPTR(p) printf("%p\n", p)

int main()
{
    int nums[] = {1,3,2,4,3,5,4,2};
    int *a = nums;
    int *b = a + 4;

    printf("sizeof(int) = %d\n", sizeof(int));
    PRPTR(a + 0);
    PRPTR(a + 1);
    PRPTR(b - 2);
    PRPTR(b - 1);

    return 0;
}
